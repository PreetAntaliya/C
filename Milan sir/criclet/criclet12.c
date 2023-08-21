#include<stdio.h>

void main(){
	int i,j,s;
	
	printf("Patern 12\n\n");
	
	for(i=5;i>=1;i--){
		for(s=4;s>=i;s--){
			printf("  ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

}
