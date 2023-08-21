#include<stdio.h>

main(){
	//a=10 b=20 
	int a;
	int b;
	int c;
	printf("Enter Value Of a:");
	scanf("%d", &a);
	
	printf("Enter Value Of b:");
	scanf("%d", &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("a = %d \n", a);	
	printf("b = %d \n", b);
}
