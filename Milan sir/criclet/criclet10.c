#include<stdio.h>

void main(){
	int i,j;
	
	printf("Patern 10\n\n");
	
	for(i=5;i>=1;i--){
		for(j=5;j>=i;j--){
			printf("%d ",i);
		}
		printf("\n");
	}

}
