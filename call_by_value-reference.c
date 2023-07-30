#include <stdio.h>

void swap_call_by_val(int a,int b);
void swap_call_by_ref(int *a,int *b);
int main(){
	int num1=1,num2=2;
	printf("Before: a=%d, b=%d\n",num1,num2);
	swap_call_by_val(num1,num2);
	printf("After Call By Val: a=%d, b=%d\n",num1,num2);
	swap_call_by_ref(&num1,&num2);
	printf("After Call By Ref: a=%d, b=%d\n",num1,num2);
}

void swap_call_by_val(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}

//Diziler her zaman referans olarak aktarýlýr.
//Çünkü bir dizinin her zaman baþlangýç adresi ile iþlem yapýlýr.
void swap_call_by_ref(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
