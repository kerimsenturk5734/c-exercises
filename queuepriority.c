#include <stdio.h>
#include <stdlib.h>



int dizi [5];
int front=-1, rear=-1, count=0;

void enqueue(int veri)
{
	if(count==5)
		printf("Kuyruk doludur.Eleman eklenemiyor");
	else if(veri<10){
		dizi[front]=veri;
		count++;
	}
	else
	{
		rear++;
		if(rear==5){
			int i=0;
			
			for(;i<4;i++)
				dizi[i]=dizi[i+1];
			rear--;
			front--;
		}
		count++;
		dizi[rear]=veri;
	}
	
}

int dequeue()
{
	if(count==0)
		printf("Kuyruk bostur.Eleman cikarilamiyor");
	else
	{
		front++;
		count--;
		return dizi[front];
	}
}

void yazdir()
{
	
    if (count==0)
	printf("Kuyruk bos \n");
	
	
	else
	{
		int i;
		for(i=front+1; i<=rear; i++)
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
