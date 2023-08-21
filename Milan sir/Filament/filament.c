#include<stdio.h>
#include<string.h>

void main(){
	
	char a[50],b[50];
	int i;
	
	printf("1] Using String...\n");
	printf("Enter Any Thing In LowerCase : ");
	gets(b);
	
	printf("Using String : %s",strupr(b));
	
	//Using ASCII Values 
	printf("\n\n2] Using ASCII Values...\n");
	printf("Enter Any Thing In LowerCase : ");
	gets(a);
	for(i=0;i<a[i]!='\0';i++){
		a[i] = a[i] - 32;
	}
	
	printf("Using ASCII : %s",strupr(a));
	
}
