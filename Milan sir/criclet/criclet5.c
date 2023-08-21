#include<stdio.h>

void main(){
	int i,j;
	
	printf("Patern 5\n\n");
	
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
