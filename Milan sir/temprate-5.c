#include <stdio.h>

void main() {
    int num, prime = 1, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 0; 
    } else {
        for ( i = 2; i*i<=num; i++) {
            if (num % i == 0) {
                prime = 0; 
                break;
            }
            
        }
    }

    if (prime) {
        printf(" %d is Prime Number.\n", num);
    } else {
        printf(" %d is not Prime Number.\n", num);
    }

    
}
