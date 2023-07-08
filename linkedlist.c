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
	iter=head; 	//Sonradan iter deðiþkenini kullanabilmek için head atadýk
	
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

	//LINKED LIST ELEMAN SÝLME
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
	 //node tipinde bir pointer tanýmladýk
	head=(struct node*)malloc(sizeof(struct node));	//tanýmlanan pointer için hafaýzada yer ayrýlýr.Pointer'ýn data ve next diye property leri var.
	head->data=1;	//head pointer'ýnýn data sýna 1 atar.
	head->next=(struct node*)malloc(sizeof(struct node));	//head pointer'ýnýn next pointer'ýný tanýmlar.
	head->next->data=2;  //head in next inin data sýna 2 atar.
	head->next->next=(struct node*)malloc(sizeof(struct node));	//head pointer'ýnýn next pointer'ýnýn next pointer'ýný tanýmlar.
	head->next->next->data=3;  //head in next inin data sýna 3 atar.
	head->next->next->next=NULL; //son elemanýn next'ine NULL atamalýyýz çünkü boþ olursa bellekte herhangi bir yeri gösterir.
	
	struct node *temp;	//List üzerinde gezinmek için yedek bir node tanýmladýk
	temp=(struct node*)malloc(sizeof(struct node)); //tanýmlanan bu node için hafýzada yer ayýrttýk.
	temp=head;	//temp e head düðümünü atayarak baþlayacaðý yeri gösterdik.                                   ***HEAD OLMADAN LÝNKED LÝST ÜZERÝNDE HERHANGÝ BÝR ELEMAN SEÇÝLEMEZ
	
	//printf("%d",temp->data);
	//printf("%d",temp->next->data);
	temp=temp->next;
	//printf("%d",temp->next->data);
	
	temp=head;
	
	int count=1; 	//LIST deki node sayýsýný döndürür.
	while(temp->next!=NULL){	//Linked List'in tüm elemanlarýný rahtalýkla gezeriz.Eðer üzerine geldiðimiz NODE 'UN next'i NULL gösteriyorsa bu list'in sonuna geldiimiz anlamýna gelir.
		//printf("\n %d ",temp->data );
		temp=temp->next;
		count++;
	//	printf("\n%d",count);
	}
	
	struct node *last=(struct node*)malloc(sizeof(struct node));  //Son elemanýn adresini tutmasý için yeni bir pointer tanýmladýk
	last=temp;	//son elemanýn adresini pointer'a atadýk.
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




