#include<stdio.h>

main(){
	float a,b,c,d,e, ans , pr;
	printf("Enter a,b,c,d,e :\n");
	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
	
	printf("Enter PR for Minus :\n");
	scanf("%f", &pr);
	
	ans = a / b * c + d - e;
	
	pr = ans - (ans / 100);
	
	
	printf("ans is %f \n", ans);
	printf("pr is %f%", pr);	
}
