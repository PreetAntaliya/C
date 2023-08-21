#include <stdio.h>

void main() {
    int x,i;
    
    printf("Enter the number of : ");
    scanf("%d", &x);
    
    int a[x];


    for (i = 0; i < x; i++) {
    	printf("Enter number %d : ", i+1);
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];

    for (i = 1; i < x; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    
    printf("Minimum value is: %d\n", min);
    printf("Maximum value is: %d\n", max);

}

