#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
	int data;
	struct node *next;
};

struct node *head;
struct node *temp;
struct node *veri;
int count=1;

void printlist(){
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;			
	}
	printf("----------------------------\n");
}

	//LINKED LIST SONA ELEMAN EKLEME
void insertItemToLast(int data){
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	veri=(struct node*)malloc(sizeof(struct node));
	temp->next=veri;
	veri->data=data;
	veri->next=NULL;
	count++;
}

	//LINKED LIST BASA ELEMAN EKLEME
void insertItemToHead(int data){
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=head;
	temp->data=data;
	head=temp;
	count++;
}

	//LINKED LIST ORTAYA ELEMAN EKLEME
void insertItemInBetween(int data,int sira){
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	veri=(struct node*)malloc(sizeof(struct node));
	
	int i=1;
	while(i<sira-1){
		temp=temp->next;
		i++;
	}
	veri->next=temp->next;
	temp->next=veri;
	veri->data=data;
	count++;
}
	//LINKED LIST ELEMAN SÝLME
void removeItem(int sira){
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	veri=(struct node*)malloc(sizeof(struct node));
	
	int i=1;
	while(i<sira-1){
		temp=temp->next;
		i++;
	}
	veri=temp->next;
	temp->next=temp->next->next;
	free(veri);
	count--;
}


int main(){
	head=(struct node*)malloc(sizeof(struct node));
	head->data=1;
	head->next=NULL;
	printf("%p",head->next);
	insertItemToLast(2);
	printlist();
	insertItemToHead(0);
	printlist();
	insertItemToLast(3);
	printlist();
	insertItemInBetween(4,2);
	printlist();
	removeItem(4);
	printlist();
	
	
	
	
	return 0;
}
