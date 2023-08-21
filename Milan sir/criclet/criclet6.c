#include<stdio.h>

void main(){
	int i,j;
	
	printf("Patern 6\n\n");
	
	for(i=5;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
