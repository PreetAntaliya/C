#include<stdio.h>

void rate();

void main() {
	
    rate();
}
void rate(){
	
	float pri,rate,time,ans;
	
	printf("Enter Your Principal Amount : ");
    scanf("%f", &pri);
    
    printf("Enter Rate of Interest : ");
    scanf("%f", &rate);
    
    printf("Enter Time In Years : ");
    scanf("%f", &time);
    
    ans = pri*rate*time/100;
    
    printf("Your Interest Is %f\n",ans);
    printf("Your Total Val Is %f",ans+pri);
	
}

