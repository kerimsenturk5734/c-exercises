#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node*root;
struct node*iter;
struct node*travel;

//struct node*createNode(int userdata){
//	struct node* newnode=(struct node*)malloc(sizeof(struct node));
//	newnode->data=userdata;
//	newnode->left=NULL;
//	newnode->right=NULL;
//	return newnode;
//}

void addNode(int userdata){
	
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=userdata;
	newnode->left=NULL;
	newnode->right=NULL;
	
	iter=(struct node*)malloc(sizeof(struct node));
	iter=root;
	
	
	while(iter!=NULL){
		if((newnode->data)<(iter->data)){
			
			if(iter->left==NULL){
				iter->left=newnode;
				iter=NULL;
			}
				
			else
				iter=iter->right;
		}
		else{
			
			if(iter->right==NULL){
				iter->right=newnode;
				iter=NULL;
			}
				
			else
				iter=iter->right;
			
		}
			
	}
	
}

void printTree(){
	travel=(struct node*)malloc(sizeof(struct node));
	travel=root;
	
	while(travel!=NULL){
		printf("%d",travel->data);
		printf("%d",travel->left->data);
		travel=travel->right;
	}
}



int main (){
	
	root=(struct node*)malloc(sizeof(struct node));
	root->left=NULL;
	root->right=NULL;
	root->data=40;
	
	//printf("%d",createNode(40)->data);
	addNode(50);
	addNode(30);
	addNode(60);
	addNode(25);
	addNode(35);
	addNode(55);
	
	printTree();
	
	
	return 0;
}
