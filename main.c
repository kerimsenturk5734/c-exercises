#include <stdio.h>
#include <conio.h>
#define PI	3.14

int main(){
	
	
	printf("Hello\tWorld\n");
	printf("Merhaba Dunya");
	int x=10;
	int *p=&x;
	
	printf("%d\n",x);		//x in içeriðini yazdýrýr.
	printf("%p\n",&x);		//x in adresini yazdýrýr.							!!!POÝNTER ÝÞLEMLERÝ!!!!
	printf("%p\n",p);		//p nin içeriðini yazdýrýr.
	printf("%p\n",&p);		//p nin adresini yazdýrýr.
	printf("%d\n",*p);		//p nin gösterdiði adresin içeriðini yazdýrýr.
	
/*	
	printf("%d",2*5%4);	//öncelik % iþlemindedir.
	x++;	//Önce x'i kullanýr sonra x'i 1 artýrýr;											!!!BAZI ÝÞLEMLER VE DAHA BASÝT YAZIMLARI!!!
	++x;	//Önce x'i 1 artýrýr daha sonra x'i kullanýr
	int x1,x2,x3,x4;
	x1=x2=x3=x4=0;	//Önce x4'e 0 atanýr sonra x3'e x4 atanýr ve böyle devam eder.
	x %=10; // DEÐÝÞKEN ÝÞLEM=ÝFADE þeklinde tüm iþlemler bu þekilde kýsaltýlabilir.
	
	
	int dizi[10]={21,2,3,4,5,6,7,8,9,10};
	int *p=dizi;
	printf("%p\n",dizi);
	printf("%p\n",p);
	printf("%p\n",dizi[1]);
	printf("%d\n",*++p);
	printf("%p",++p);
	
	int x;
	float hacim;
	
	scanf("Lütfen yarýçap deðerini giriniz %d",&x);
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
 	//---------------------------------------------------------------------RECURSIVE ÜST ALMA FONKSÝYONU---------------------------------------------------------------
 	*/
 }




