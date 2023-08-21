#include<stdio.h>

void main(){
	int i,j;
	
	printf("Patern 1\n\n");
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
