#include<stdio.h>

void main(){
	int i,j,s;
	
	printf("Patern 11\n\n");
	
	for(i=1;i<=5;i++){
		for(s=i;s<=5;s++){
			printf("  ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

}
