#include<stdio.h>

void main(){
	int fact=1,i,num;
	printf("Enter Number :- ");
	scanf("%d",&num);
	
	for(i=1; i <= num; i++){
		fact = fact*i;
	}
	
	printf("The Factorial Of %d is %d", num,fact);
	
}
