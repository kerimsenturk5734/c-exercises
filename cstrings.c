#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	/*char isim[10];
	printf("isim giriniz\n");
	scanf("%s",isim);
	printf("girdiginiz isim : %s",isim);
	//null terminated \0 
	//dizim 10 karakterlik belirendi ise bunun 9 unu kullanabilirim ve sonuncusu \0 eleman�d�r.
	//10 karakterlik bir diziye 4 karakterlik bir dizi girdiysem 5. karakter \0 dir
	*/
	
	
	//GETS(),PUTS()
	/*char cumle[0];
	printf("cumle giriniz");
	gets(cumle);
	printf("girdiginiz cumle:\n");
	puts(cumle);
	//scanf bosluklar� almamamktad�r bu yuzden gets kullan�yoruz*/
	
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
		printf("baslang�c noktas�:%d",(ptr-kaynak));
	else
		printf("eslesme bulunamad�");*/
		
	//atoi convert to int 
	//atof convert to float
	
	/*char kok_iki[]="1.414213";
	char pi[]="3.14";
	char tamsayi[]="156";
	char hayatin_anlmai[]="42 is the answer";
	
	printf("%d\n",atoi(tamsayi));
	printf("%d\n",atoi(hayatin_anlmai)); //bastan okumaya baslar bu yuzden character gelene kadar okur ve atar
	//eger say� ortada olsayd� cev�rmezd�.
	printf("%d\n",atoi(kok_iki));
	printf("%d\n",atoi(pi));*/
	
	//gets-->klavyeden ald��� de�eri ge�erli de�i�kene atar.
	//puts-->istenilen de�i�keni ekrana yazar.
	//strcpy-->birinci de�i�kene ikinci de�i�keni kopyalar
	//strncpy-->birinci de�i�kene ikinci de�i�kenin ba�tan istenilen kadar�n� kopyalar.
	//stcmp-->birinci de�i�kenle ikinci de�i�keni kar��la�t�r�r.1. �nce ise -1 denk ise 0 ikinci �nce ise 1 d�nd�r�r.
	//strcat-->de�i�kenleri concatanete eder.
	//strstr-->string i�inde arama i�lemi yapar.E�er aranan string varsa ba�lad��� indexin adresini d�nd�r�r.Yoksa null d�ner.
	//atoi-->string to integer
	//atof-->string to float
	
	return 0;
}
