#include<stdio.h>

void main(){
	
	int i,j,s;
	
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	for(i=4;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
	for(i=1;i<=4;i++){
		for(s=4;s>=i;s--){
			printf("  ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i++){
		for(s=2;s<=i;s++){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
}
