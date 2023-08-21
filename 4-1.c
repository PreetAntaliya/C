#include<stdio.h>

main(){
	
	//1st
	float x_1,y_1,ans_1;
	
	printf("1] (X + Y)^2\n");
	printf("Enter Value Of X:");
	scanf("%f", &x_1);
	
	printf("Enter Value Of Y:");
	scanf("%f", &y_1);
	
	ans_1 = (x_1*x_1) + 2*x_1*y_1 + (y_1*y_1);
	
	printf("The Ans Is:%f\n\n\n",ans_1);
	
	
	//2nd
	float x_2,y_2,ans_2;
	
	printf("2] (X - Y)^2\n");
	printf("Enter Value Of X:");
	scanf("%f", &x_2);
	
	printf("Enter Value Of Y:");
	scanf("%f", &y_2);
	
	ans_2 = (x_2*x_2) - 2*x_2*y_2 + (y_2*y_2);
	
	printf("The Ans Is:%f\n\n",ans_2);
	
	
	//3rd
	float x_3,y_3,ans_3;
	
	printf("3] (X + Y)3\n");
	printf("Enter Value Of X:");
	scanf("%f", &x_3);
	
	printf("Enter Value Of Y:");
	scanf("%f", &y_3);
	
	ans_3 = (x_3+y_3)*3;
	
	printf("The Ans Is:%f\n\n",ans_3);
	
	
	//4th
	float x_4,y_4,ans_4;
	
	printf("4] (X - Y)3\n");
	printf("Enter Value Of X:");
	scanf("%f", &x_4);
	
	printf("Enter Value Of Y:");
	scanf("%f", &y_4);
	
	ans_4 = (x_4-y_4)*3;
	
	printf("The Ans Is:%f\n\n",ans_4);
	
	
	//5th
	float x_5,y_5,z_5,ans_5;
	
	printf("5] (X + Y + Z)3\n");
	printf("Enter Value Of X:");
	scanf("%f", &x_5);
	
	printf("Enter Value Of Y:");
	scanf("%f", &y_5);
	
	printf("Enter Value Of Z:");
	scanf("%f", &z_5);
	
	ans_5 = (x_5+y_5+z_5)*3;
	
	printf("The Ans Is:%f\n\n",ans_5);
	
	
	//6th
	float x_6,y_6,z_6,ans_6;
	
	printf("6] (X - Y - Z)3\n");
	printf("Enter Value Of X:");
	scanf("%f", &x_6);
	
	printf("Enter Value Of Y:");
	scanf("%f", &y_6);
	
	printf("Enter Value Of Z:");
	scanf("%f", &z_6);
	
	ans_6 = (x_6-y_6-z_6)*3;
	
	printf("The Ans Is:%f\n\n",ans_6);
	
	
	
	//7th
	float x_7,y_7,z_7,ans_7;
	
	printf("7] (X + Y + Z)^2\n");
	printf("Enter Value Of X:");
	scanf("%f", &x_7);
	
	printf("Enter Value Of Y:");
	scanf("%f", &y_7);
	
	printf("Enter Value Of Z:");
	scanf("%f", &z_7);
	
	ans_7 = (x_7*x_7) + (2*x_7*y_7) + (2*x_7*z_7) + (y_7*y_7) + (2*y_7*z_7) + (z_7*z_7);
	
	printf("The Ans Is:%f\n\n",ans_7);
}
