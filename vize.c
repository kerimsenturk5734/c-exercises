#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int dizi[5];
int front=-1;
int rear=-1;
int count=0 ;

int main(){
	int sayi;
	scanf("%d",&sayi);
	while(true){
		switch(sayi){
			case 1:
				{	int veri;
				scanf("%d",&veri);
				enqueue(veri);
				break;
				}
			case 2:
				dequeue();
				break;
			case 3:
				{
					int i;
					for(i=front;i<=rear;i++)
					printf("%d",dizi[i]);
				}	
			case 4:
				return 0;
				break;
			
		}
	}
	
	
	
	

	
	
	return 0;
	
}
bool isEmpty(){
	if(count==0)
		return true;
	else
		return false;
}

bool isFull(){
	if(count==sizeof(dizi))
		return true;
	else
		return false;
}


void enqueue(int veri){
	if(isFull())
		printf("Kuyruk Dolu");
	else
		rear++;
		dizi[rear]=veri;
		if(isEmpty())
			front=0;
		count++;
		
}

void dequeue(){
	if(isEmpty()){
		printf("Kuyruk boþ");
		front=-1;
		rear=-1;
	}
	else{
		front++;
		count--;
	}



	
	
	
	
	
	
}

