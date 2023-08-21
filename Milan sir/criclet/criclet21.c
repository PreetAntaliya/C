#include<stdio.h>

void main(){
	int i,j,s;
	
	printf("Patern 21\n\n");
	
	int z=1;
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%d ",z);
			z++;
		}
		printf("\n");
	}
}
