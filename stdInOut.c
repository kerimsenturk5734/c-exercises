#include<stdio.h>
int main(){
	int c;
	
	c=getchar();
	while(c!=EOF){
		putchar(c);
		c=getchar();
	}
	
	scanAndPrintTwoNumber();
	
	return 0;
}

int scanAndPrintTwoNumber(){
	int x,y;
	printf("Please enter first number.\n");
	scanf("%d %d",&x,&y);
	if(x<0 || y<0){
		fprintf(stderr,"Error: Number must be positive!");
		return -1;
	}
	printf("x:%d, y:%d",x,y);
	
	return 0;
}



//stdIn-->0, stdOut-->1, stdErr-->2 kodlarýna sahiptir.
/*Hata Yönlendirme

 ./stdInOut 2>err.txt <<IN    "IN yazana kadar deger girdir ve hata var ise out.txt ye basar."
 
*/

