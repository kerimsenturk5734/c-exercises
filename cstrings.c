#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	/*char isim[10];
	printf("isim giriniz\n");
	scanf("%s",isim);
	printf("girdiginiz isim : %s",isim);
	//null terminated \0 
	//dizim 10 karakterlik belirendi ise bunun 9 unu kullanabilirim ve sonuncusu \0 elemanýdýr.
	//10 karakterlik bir diziye 4 karakterlik bir dizi girdiysem 5. karakter \0 dir
	*/
	
	
	//GETS(),PUTS()
	/*char cumle[0];
	printf("cumle giriniz");
	gets(cumle);
	printf("girdiginiz cumle:\n");
	puts(cumle);
	//scanf bosluklarý almamamktadýr bu yuzden gets kullanýyoruz*/
	
	/*char cumle[10];
	gets(cumle);
	
	printf ("String'in uzunlugu:%d", strlen(cumle));*/
	
	
	
	//STRCPY()
	/*char kaynak[20]="Merhaba Dunya";
	char kopya[10];
	
	strcpy(kopya,kaynak);
	printf("%s",kopya);*/
	
	
	//STRNCPY()
	/*char kaynak[20]="Merhaba Dunya";
	char kopya[10];
	
	strncpy(kopya,kaynak,5);
	printf("%s",kopya);*/
	
	//STRCMP()
	/*char str1[]="a";
	char str2[]="ab";
	
	int sonuc=strcmp(str2,str1);
	printf("%d",sonuc);*/
	
	//STRCAT()
	//concatanate eder
	
	//STRSTR()
	//STRING ICINDE ARAMA ISLEMI
	//EGER TRUE ISE GERIYE STRINGIN ILK INDEXININ DONDURUR
	/*char kaynak[]="bugun hava cok guzel";
	char aranan[]=" ";
	char *ptr;
	
	ptr=strstr(kaynak,aranan);
	
	if(ptr !=NULL)
		printf("baslangýc noktasý:%d",(ptr-kaynak));
	else
		printf("eslesme bulunamadý");*/
		
	//atoi convert to int 
	//atof convert to float
	
	/*char kok_iki[]="1.414213";
	char pi[]="3.14";
	char tamsayi[]="156";
	char hayatin_anlmai[]="42 is the answer";
	
	printf("%d\n",atoi(tamsayi));
	printf("%d\n",atoi(hayatin_anlmai)); //bastan okumaya baslar bu yuzden character gelene kadar okur ve atar
	//eger sayý ortada olsaydý cevýrmezdý.
	printf("%d\n",atoi(kok_iki));
	printf("%d\n",atoi(pi));*/
	
	//gets-->klavyeden aldýðý deðeri geçerli deðiþkene atar.
	//puts-->istenilen deðiþkeni ekrana yazar.
	//strcpy-->birinci deðiþkene ikinci deðiþkeni kopyalar
	//strncpy-->birinci deðiþkene ikinci deðiþkenin baþtan istenilen kadarýný kopyalar.
	//stcmp-->birinci deðiþkenle ikinci deðiþkeni karþýlaþtýrýr.1. önce ise -1 denk ise 0 ikinci önce ise 1 döndürür.
	//strcat-->deðiþkenleri concatanete eder.
	//strstr-->string içinde arama iþlemi yapar.Eðer aranan string varsa baþladýðý indexin adresini döndürür.Yoksa null döner.
	//atoi-->string to integer
	//atof-->string to float
	
	return 0;
}
