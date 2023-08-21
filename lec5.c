#include<stdio.h>

main(){
	
	int a;
	
	printf("1] Odd/Even");
	printf("Enter Number:");
	scanf("%d", &a);
	
	if(a%2 == 0){
		printf("%d Number Is Even\n\n",a);
	}else{
		printf("%d Number Is Odd\n\n",a);
	}
	
	//vote
	int age;
	
	printf("2] Vote");
	printf("Enter Age:");
	scanf("%d", &age);
	
	if(age <= 18){
		printf("You Are Not Eligible For Vote\n\n");
	}else if(age >= 100){
		printf("You Are Died\n\n");
	}else{
		printf("You Are Eligible For Vote\n\n");
	}
	
	//percentage
	float pr;
	
	printf("3] Percentage");
	printf("Enter Percentage:");
	scanf("%f", &pr);
	
	if(pr <= 33){
		printf("You Are Failed\n\n");
	}else if(pr >= 90){
		printf("Grade = A+\n\n");
	}else if(pr >= 80){
		printf("Grade = A\n\n");
	}else if(pr >= 70){
		printf("Grade = B+\n\n");
	}else if(pr >= 60){
		printf("Grade = B\n\n");
	}else if(pr >= 50){
		printf("Grade = C\n\n");
	}else if(pr >= 34){
		printf("Grade = D\n\n");
	}
	
	
}
