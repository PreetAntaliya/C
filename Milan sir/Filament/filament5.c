#include<stdio.h>

void main(){
	char a[50];
	
	printf("Write Any Sentence : ");
	gets(a);
	
	printf("\nTotal Number Of Word is : %d",strlen(a));
}
