#include<stdio.h>

void main(){
	
	char a[50];
	int i,b=0;
	
	printf("Enter Any Sentence : ");
	gets(a);
	
	for(i=0;i<a[i]!='\0';i++){
		b++;
	}
	
	printf("The Total Number Is : %d",b);
}
