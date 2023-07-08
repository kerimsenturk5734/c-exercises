#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

int hashFunction(int key){
	int index;
	index%=10;
	asm {
	mov al,09}
	
	return index;
}
void Insert(int a[10],int index,char veri[]){
	
	if(a[index]!=NULL){
		a[index]=veri;
		
	}
	else{
		 Insert(a,index+1,veri);
	}
	
	
}

bool Search(int a[10],char veri[],int index){
	int i;
	for(i=0;i<10;i++){
	
		if(a[index]==veri)
			return true;
		else if(i!=9){
			
			index++; 
		}
		else return false;
	}
		
}
int main(){
	
	int x=11;
	printf("HASH FUNCTIONS");
	
	
	
	
	
	return 0;
}
