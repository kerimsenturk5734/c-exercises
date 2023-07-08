#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int stack[5];
int top=0;

void push(int a){
	 
	stack[top]=a;
	top++;
}


int pop(){
	
	return stack[top--];
}

int peek(){
	return stack[top];
}

void cleanStack(){
	top=0;
}

void print(){
	int i=0;
	while(i<top){
		printf("%d,",stack[i]);
		i++;
	}
}
int main(){
	
	push(10);
	
	pop();
	
	push(15);
	push(21);
	pop();
	push(28);
	print();
	cleanStack();
	print();
	
	
	return 0;
}
