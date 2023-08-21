#include<stdio.h>
main(){
	printf("====================================\n");
	printf("\t\t*\t\t*\n\n");
	printf("\t*\t\t*\t\n\n");
	printf("*\t\t*\t\t\n\n");
	printf("\t*\t\t*\t\n\n");
	printf("\t\t*\t\t*\n");
	printf("====================================\n\n\n\n\n");
	
	printf("\t*\t*\t*\t*\t*\t*\t*\n\n");
	printf("\t\t\t\t\t\t\t\n\n");
	printf("*\t*\t*\t*\t*\t*\t*\t*\n\n");
	printf("*\t\t*\t\t\t\t\t*\n\n");
	printf("*\t\t*\t\t*\t*\t*\t*\n\n");
	printf("*\t\t*\t\t*\t\t*\t*\n\n");
	printf("*\t*\t*\t*\t*\t*\t*\t*\n\n\n\n\n");
	
	
	//temrature
	float f,c,temp;
	printf("1] C -> F\n");
	printf("Enter Value Of Temperature in Celsius :");
	scanf("%f", &c);
	
	temp = (c*1.8) + 32;
	
	printf("Temperature in Fahrenhit: %f\n\n\n",temp);
	
	//swaping
	int a,b;
	printf("2] Swaping\n");
	printf("Enter Value Of A:");
	scanf("%d", &a);
	
	printf("Enter Value Of B:");
	scanf("%d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("A = %d \n", a);	
	printf("B = %d \n", b);
	
	
	
	//gross salary
	float salary,hra,da,ta,gross;
	printf("\n\n\n3] Gross Salary\n");
	printf("Enter the base salary: ");
	scanf("%f", &salary );
	
	hra = salary * 0.1;
	da = salary * 0.05;
	ta = salary * 0.08;
	
	gross = salary + hra + da + ta;
	
	printf("Gross Salary = %f", gross);
	
}
