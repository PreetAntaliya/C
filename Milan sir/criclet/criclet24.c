#include<stdio.h>

void main(){
	int i,j,s;
	
	printf("Patern 24\n\n");
	
	for(i=6;i>=2;i--){
		for(s=2;s<=i;s++){
			printf("  ");
		}
		for(j=5;j>=i;j--){
			printf("%d ",j);
		}
		for(j=i-1;j<=5;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
