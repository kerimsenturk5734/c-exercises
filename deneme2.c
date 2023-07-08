#include <stdio.h>
#include <conio.h>
#define PI	3.14

int main(){
	const float pi=3.1415;
	int c;
	float area;
	printf("please give the radius\n");
	scanf("%d",&c);
	area=pi*c*c;
	printf("yaricapi %d olan bir dairenin alani %f 'dir",c,area);
	return 0;	
	
}




