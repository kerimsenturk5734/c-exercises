#include <stdio.h>
#include <conio.h>
#define PI	3.14

int main(){
	
	
	printf("Hello\tWorld\n");
	printf("Merhaba Dunya");
	int x=10;
	int *p=&x;
	
	printf("%d\n",x);		//x in i�eri�ini yazd�r�r.
	printf("%p\n",&x);		//x in adresini yazd�r�r.							!!!PO�NTER ��LEMLER�!!!!
	printf("%p\n",p);		//p nin i�eri�ini yazd�r�r.
	printf("%p\n",&p);		//p nin adresini yazd�r�r.
	printf("%d\n",*p);		//p nin g�sterdi�i adresin i�eri�ini yazd�r�r.
	
/*	
	printf("%d",2*5%4);	//�ncelik % i�lemindedir.
	x++;	//�nce x'i kullan�r sonra x'i 1 art�r�r;											!!!BAZI ��LEMLER VE DAHA BAS�T YAZIMLARI!!!
	++x;	//�nce x'i 1 art�r�r daha sonra x'i kullan�r
	int x1,x2,x3,x4;
	x1=x2=x3=x4=0;	//�nce x4'e 0 atan�r sonra x3'e x4 atan�r ve b�yle devam eder.
	x %=10; // DE���KEN ��LEM=�FADE �eklinde t�m i�lemler bu �ekilde k�salt�labilir.
	
	
	int dizi[10]={21,2,3,4,5,6,7,8,9,10};
	int *p=dizi;
	printf("%p\n",dizi);
	printf("%p\n",p);
	printf("%p\n",dizi[1]);
	printf("%d\n",*++p);
	printf("%p",++p);
	
	int x;
	float hacim;
	
	scanf("L�tfen yar��ap de�erini giriniz %d",&x);
	hacim=(4/3.0)*PI*(x*x*x);
	printf("Kurenin hacmi=%f",hacim);
	int a;
	int b;
	
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("%d",ustAlma(a,b));
	

	return 0;
}
 int ustAlma(int alt,int ust){
 	
 	if(ust==0)
 		return 1;
 	
 	else
 		return alt*ustAlma(alt,ust-1);
 	//---------------------------------------------------------------------RECURSIVE �ST ALMA FONKS�YONU---------------------------------------------------------------
 	*/
 }




