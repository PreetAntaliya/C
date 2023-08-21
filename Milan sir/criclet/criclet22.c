#include<stdio.h>

void main(){
	int i,j,s;
	
	printf("Patern 22\n\n");
	
	for(i='A';i<='E';i++){
		for(j=i;j>='A';j--){
			printf("%c ",i);
		}
		printf("\n");
	}
}
