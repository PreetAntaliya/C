#include<stdio.h>

main(){
	float r, area, perimeter;
	const float pi = 3.14;
	printf("Enter r :\n");
	scanf("%f", &r);
	
	area = pi * r * r;
	
	perimeter = 2 * pi * r;
	
	
	printf("area of circle is %f \n", area);
	printf("perimeter of circle is %f", perimeter);	
}
