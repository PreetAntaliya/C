#include<stdio.h>

void main(){
	
	int i,j,s;
	
	printf("Patern 1\n\n");
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	printf("Patern 2\n\n");
	
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	printf("Patern 3\n\n");
	
	for(i=5;i>=1;i--){
		for(j=5;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("Patern 4\n\n");
	
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("Patern 5\n\n");
	
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	printf("Patern 6\n\n");
	
	for(i=5;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("Patern 7\n\n");
	
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("Patern 8\n\n");
	
	for(i=45;i<=49;i++){
		for(j=45;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	printf("Patern 9\n\n");
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	printf("Patern 10\n\n");
	
	for(i=5;i>=1;i--){
		for(j=5;j>=i;j--){
			printf("%d ",i);
		}
		printf("\n");
	}

	printf("\n\n\n");
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

	printf("\n\n\n");
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

	printf("\n\n\n");
	printf("Patern 13\n\n");
	
	for(i=1;i<=5;i++){
		for(s=2;s<=i;s++){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("Patern 14\n\n");
	
	for(i=5;i>=1;i--){
		for(s=2;s<=i;s++){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("Patern 15\n\n");
	
	for(i=1;i<=5;i++){
		for(s=4;s>=i;s--){
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}


}
