#include<stdio.h>

void main(){
	int i,j,s;
	
	printf("Patern 20\n\n");

	for(i=1;i<=5;i++){
		for(s=4;s>=i;s--){
			printf("  ");
		}
		for(j=1;j<=1;j++){
			printf("* ");
		}
		for(s=2;s<=i;s++){
			printf("  ");
		}
		for(s=2;s<=i;s++){
			printf("  ");
		}
		for(j=1;j<=1;j++){
			printf("* ");
		}
		printf("\n");
	}
}
