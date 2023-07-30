#include <stdio.h>
#include <forkheader.h>
int main(){
	int i;
	
	for(i=0;i<8;i++){
		fork();
	}
	
	printf("process...");
	return 0;
}

