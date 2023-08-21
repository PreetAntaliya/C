#include<stdio.h>
#include<unistd.h>

void main(){
	int i,j,k;
	printf("Welcome To Guessing Number Game\n");
	printf("Enter Number That You Guess :- ");
	scanf("%d",&i);
	sleep(1);
    printf("Wait");
    for (j=0;j<3;j++) {
        printf(".");
        fflush(stdout);
        sleep(1.5);
    }
    printf("\nLoading");
    for (j=0;j<4;j++) {
        printf(".");
        fflush(stdout);
        sleep(1.5);
    }

    printf("\n\nI Think You Guess Number %d !\n",i);
	
	
}
