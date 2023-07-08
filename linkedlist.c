#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
	int data;
	struct node * next;
	
};


struct node *head;
struct node *tempf;
struct node *iter;
struct node *iter2;
struct node *iter3;
	
	//LINKED LIST ELEMAN YAZDIRMA
void printlinkedlist(){
	
	struct node *tempf=(struct node*)malloc(sizeof(struct node));
	tempf=head;
		while(tempf!=NULL){
			printf("%d\n",tempf->data);
			tempf=tempf->next;
		}
	
}
	//LINKED LIST SONA ELEMAN EKLEME
void insertItemToLast(int data){
	iter=(struct node*)malloc(sizeof(struct node));
	iter=head;
	while(iter->next!=NULL){
		iter=iter->next;
	}
	struct node *item;
	item=(struct node*)malloc(sizeof(struct node));
	iter->next=item;
	item->data=data;
	item->next=NULL;
	iter=head;		
}
	//LINKED LIST BASA ELEMAN EKLEME
void insertItemToHead(int data){
	iter=(struct node*)malloc(sizeof(struct node));
	iter->next=head;
	iter->data=data;
	head=iter;
	iter=head; 	//Sonradan iter de�i�kenini kullanabilmek i�in head atad�k
	
}
	//LINKED LIST ORTAYA ELEMAN EKLEME
void insertItemInBetween(int data,int sira){
	iter=(struct node*)malloc(sizeof(struct node));
	iter=head;
	iter2=(struct node*)malloc(sizeof(struct node));
	
	int i=1;
	while(i<sira-1){
		iter=iter->next;
		i++;
	}
	iter2->next=iter->next;
	iter->next=iter2;
	iter2->data=data;
		
}

	//LINKED LIST ELEMAN S�LME
void removeItem(int sira){
	iter3=(struct node*)malloc(sizeof(struct node));
	iter3=head;
	int i=1;
	while(i<sira-1){
		iter3=iter3->next;
		i++;
	}
	iter3->next=iter3->next->next;
	iter3->next=iter3;
	free(iter3);
}

int main(){
	 //node tipinde bir pointer tan�mlad�k
	head=(struct node*)malloc(sizeof(struct node));	//tan�mlanan pointer i�in hafa�zada yer ayr�l�r.Pointer'�n data ve next diye property leri var.
	head->data=1;	//head pointer'�n�n data s�na 1 atar.
	head->next=(struct node*)malloc(sizeof(struct node));	//head pointer'�n�n next pointer'�n� tan�mlar.
	head->next->data=2;  //head in next inin data s�na 2 atar.
	head->next->next=(struct node*)malloc(sizeof(struct node));	//head pointer'�n�n next pointer'�n�n next pointer'�n� tan�mlar.
	head->next->next->data=3;  //head in next inin data s�na 3 atar.
	head->next->next->next=NULL; //son eleman�n next'ine NULL atamal�y�z ��nk� bo� olursa bellekte herhangi bir yeri g�sterir.
	
	struct node *temp;	//List �zerinde gezinmek i�in yedek bir node tan�mlad�k
	temp=(struct node*)malloc(sizeof(struct node)); //tan�mlanan bu node i�in haf�zada yer ay�rtt�k.
	temp=head;	//temp e head d���m�n� atayarak ba�layaca�� yeri g�sterdik.                                   ***HEAD OLMADAN L�NKED L�ST �ZER�NDE HERHANG� B�R ELEMAN SE��LEMEZ
	
	//printf("%d",temp->data);
	//printf("%d",temp->next->data);
	temp=temp->next;
	//printf("%d",temp->next->data);
	
	temp=head;
	
	int count=1; 	//LIST deki node say�s�n� d�nd�r�r.
	while(temp->next!=NULL){	//Linked List'in t�m elemanlar�n� rahtal�kla gezeriz.E�er �zerine geldi�imiz NODE 'UN next'i NULL g�steriyorsa bu list'in sonuna geldiimiz anlam�na gelir.
		//printf("\n %d ",temp->data );
		temp=temp->next;
		count++;
	//	printf("\n%d",count);
	}
	
	struct node *last=(struct node*)malloc(sizeof(struct node));  //Son eleman�n adresini tutmas� i�in yeni bir pointer tan�mlad�k
	last=temp;	//son eleman�n adresini pointer'a atad�k.
	int i;
	
	insertItemToLast(10);
	insertItemToLast(20);
	insertItemToLast(30);
	insertItemToHead(40);
	
	printlinkedlist();	
	printf("----/n");
	insertItemInBetween(50,4);
	removeItem(4);
	printlinkedlist();
	
	return 0;
}




