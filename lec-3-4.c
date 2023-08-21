#include<stdio.h>

main(){
	float p,r,t, total;
	printf("Enter p :");
	scanf("%f", &p);
	
	printf("Enter r :");
	scanf("%f", &r);
	
	printf("Enter t :");
	scanf("%f", &t);
	
	total = p * (1 + (r / 100) * t);
	
	printf("Total Amount is %f \n", total);	
}
