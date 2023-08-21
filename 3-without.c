#include<stdio.h>

main(){
	//a=10 b=20 
	int a,b;
	printf("Enter Value Of a:");
	scanf("%d", &a);
	
	printf("Enter Value Of b:");
	scanf("%d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("a = %d \n", a);	
	printf("b = %d \n", b);
}
