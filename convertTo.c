#include <stdio.h>
#define UPPERLOWERGAP 32
int toLowerCase(int c);
int toUpperCase(int c);
int* toLowerStr(int* str);
int* toUpperStr(int* str);
int main(){
	int c;
	int str[100];
	int i=0;
	while( (c=getchar()) !=EOF){
		str[i]=c;
		i++;
	}
	
	printf("Your string: %s\n", str);
	
	return 0;
}

int toLowerCase(int c){
	if(c>='A' && c<='Z')
		return c+UPPERLOWERGAP;
	
	return c;
}

int toUpperCase(int c){
	if(c>='a' && c<='z')
		return c-UPPERLOWERGAP;
	
	return c;
}

int* toLowerStr(int* str){
	int i=0;
	while(str[i]!='\0'){
		str[i]=toLowerCase(str[i]);
		i++;
	}
	
	return str;
}

int* toUpperStr(int* str){
	int i=0;
	while(str[i]!='\0'){
		str[i]=toUpperCase(str[i]);
		i++;
	}
	
	return str;
}
