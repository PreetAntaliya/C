#include <stdio.h>

void main() {
    int a[50],n,i;

    printf("Enter The Total Number Of Values : ");
    scanf("%d", &n);

    for (i=0;i<n;i++) {
        printf("Number %d: ", i+1);
        scanf("%d", a + i);
    }

    printf("\nArray : ");
    for ( i = 0; i < n; i++) {
        printf("%d ", *(a + i));  
    }
    printf("\n");

    printf("Even Number : ");
    for ( i = 0; i < n; i++) {
        if (*(a + i) % 2 == 0) {  
            printf("%d ", *(a + i));
        }
    }

}

