#include<stdio.h>

void main(){
	int i,j,s;
	
	printf("Patern 17\n\n");
	
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
