#include<stdio.h>

void main(){
	
	char day;
	printf("Enter Day:-");
	scanf("%c", &day);
	
	switch(day){
		case 's':
			printf("Sunday!");
		break;
		case 'm':
			printf("Monday!");
		break;
		case 't':
			printf("Tuesday!");
		break;
		case 'w':
			printf("Wednesday!");
		break;
		case 'T':
			printf("Thursday!");
		break;
		case 'f':
			printf("Friday!");
		break;
		case 'S':
			printf("Saturday!");
		break;
		default:
			printf("Not Valid Input");
	}
}
