#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int openFile(char* path);
void removeFile(char* path);
void closeFile(int file);
void writeFile(char* path);
void readFile(char *path);
int main(){
	char path[]="open.txt";
	int file=openFile(path);
	closeFile(file);
	removeFile(path);
	readFile(path);
	writeFile(path);
}

int openFile(char* path){
	int file=open(path,O_RDONLY | O_CREAT, 0666);//Dosya açar.
	
	if(file < 0){
		fprintf(stderr,"File couldn't open.\n");
	}
	printf("File opened.\n");
	return file;
}

void closeFile(int file){
	
	
	if(close(file) < 0){
		fprintf(stderr,"File couldn't close.\n");
	}
	
	printf("File closed.\n");
}

void removeFile(char* path){
	if(remove(path) < 0){
		fprintf(stderr,"File couldn't remove.\n");
	}
	
	printf("File removed.\n");
}
//stdin,stdout,stderr de birer açýk dosyadýr.
//stdin=0,stdout=1,stderr=2 dosya numaralarýný sahiptir.
//close(1) ile çýkýþ dosyasýný kapatarak printf
//gibi fonksiyonlarý devre dýþý býrakabiliriz.
void readFile(char *path){
	char buf[100];
	int file=openFile(path);
	if(read(file,buf,100) < 0){
		fprintf(stderr,"File couldn't read.\n");
	}
	printf("File readed.\n");
}

void writeFile(char* path){
	int file=openFile(path);
	int *sentence="Bugun hava çok güzel.";
	char buf[128];
	if(write(file,buf,128) < 0){
		fprintf(stderr,"File couldn't read.\n");
	}
	else{
		printf("File writed.\n");
	}
}


