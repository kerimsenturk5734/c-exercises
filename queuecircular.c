#include <stdio.h>
#include <stdlib.h>



int dizi [5];
int front=0, rear=0, count=0;

void enqueue(int veri)
{
	if(count==5)
		printf("Kuyruk dolu.Eleman eklenemiyor");
	else
	{
		rear=rear%5;
		dizi[rear]=veri;
		rear++;
		count++;
	}
}

void dequeue()
{
	if(count==0)
		printf("Kuyruk bostur.Cýkartma yapilamiyor.");
	else
	{
		front++;
		front=front%5;
		count--;
		
	}
	
}

void yazdir()
{
	
    if (count==0)
	printf("Kuyruk bos \n");
	else
	{
		int i;
		for(i=front; i<rear; i++)
		{
			printf("%d-",dizi[i]);
		}
		printf("\n-------------------------");
	}	
}



int main()
{
	int secim, sayi;
	while(1)
	{
		
		printf("\n1--- ekle \n");
		printf("2--- cikar \n");
		printf("3--- yazdir\n");
		printf("4--- CIKIS \n");
		printf(" seciminizi yapin :\n-------------------------------");
		scanf("%d",&sayi);
		switch(sayi)
		{
			case 1: printf("sayi girin: ");
				scanf("%d", &sayi);
				printf("---------------------");
				enqueue(sayi);
				break;
			case 2:
				dequeue();
				break;
			case 3: 
				yazdir();
				break;
			case 4: 
				return 0;
			
		}
	}
}
