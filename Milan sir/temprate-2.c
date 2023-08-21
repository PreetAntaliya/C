#include<stdio.h>

void main(){
	int i=1, number,ans;
	
	printf("Enter Number :- ");
	scanf("%d",&number);
	
	table:
		ans = number * i;
		printf("%d X %d = %d\n",number,i,ans);
		i++;
		
		if(i<=10){
			goto table;
		}
}
