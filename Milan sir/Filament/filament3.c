#include<stdio.h>
#include<string.h>

void main(){
	
	char a[50];
	int i,alp=0,spl=0,num=0;
	
	printf("Enter Any Sentence : ");
	gets(a);
	
	for(i=0;i<=a[i] != '\0'; i++){
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
			alp++;
		}
		else if ( a[i]>='0' && a[i]<='9'){
			num++;
		}else{
			spl++;
		}
		
	}
	printf("\nThe Total Number Of Alphabets Is : %d\n",alp);
	printf("The Total Number Of Digit Is : %d\n",num);
	printf("The Total Number Of Special Characters Is : %d\n",spl);
	
}
