#include<stdio.h>

void area(float r);

void main(){
	float r;
	
	printf("Enter Value Of Radius : ");
	scanf("%f",&r);
	
	area(r);
}

void area(float r){
	float ans;	
	ans = 3.14*r*r;	
	printf("The Area of Circle Is : %.2f",ans);	
}


