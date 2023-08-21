#include<stdio.h>

void main(){
	int a=0,b=1,c,i,end;
	
	printf("Enter Ending Value :- ");
	scanf("%d", &end);
	
	printf("%d  %d  ",a,b);
	for(i=1;i<=end;i++){
		printf("%d  ", c);
		a = b;
		b = c;
		c = a + b;
	}
	
}
