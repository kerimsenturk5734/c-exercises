#include <stdio.h>
#include <stdlib.h>



int dizi [5];
int front=-1, rear=-1;

void enqueue(int veri)
{
	if(rear==SIZE-1)
    printf(" Kuyruk doludur \n");
	else
	{
	    if(front==-1)
		front=0;
		
		rear++;
		dizi[rear]=veri;
	}	
}

void dequeue()
{
	if(front==-1 || front>rear)
	{
		printf("Kuyruk boþtur \n");
		front==-1;
		rear==-1;
	}
	else
	{
		front=front+1;
	}
}

void yazdir()
{
	system("cls");
    if (front==-1)
	printf("Kuyruk boþ \n");
	else
	{
		int i;
		for(i=front; i<=rear; i++)
		{
			printf("%d-",dizi[i]);
		}
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
		printf(" seciminizi yapin :\n");
		scanf("%d",&sayi);
		switch(sayi)
		{
			case 1: printf("sayi girin: ");
				scanf("%d", &sayi);
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
