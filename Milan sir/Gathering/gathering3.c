#include <stdio.h>

int palindrome();

void main() {
    if(palindrome()){
        printf("This Number Is Palindrome\n");
    } else{
        printf("This Number Is Not Palindrome\n");
    }
}

int palindrome(){
	int reverse=0,num;
	
	printf("Enter Any Number : ");
	scanf("%d",&num);
	
	int original = num;
	
	while(num != 0 || num>0){
		reverse = reverse*10 + num%10;
		num = num/10;
	}
	
	if(original == reverse){
		return 1;
	} else {
		return 0;
	}
	
} 
