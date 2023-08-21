#include <stdio.h>
#include <string.h> 

void main() {
    char a[50], n;
    int b[50], count = 0, i; 
   

    printf("Enter Any Sentence : ");
    gets(a); 

    printf("Enter a Character That You WAnt To Find : ");
    scanf("%c", &n); 
    for ( i = 0; i < strlen(a); i++) {
        if (a[i] == n) {
            b[count++] = i;
        }
    }

    if (count == 0) {
        printf("Please, Enter Valid input !\n");
    } else {
        printf("The Character '%c' Found At : ", n);
        for ( i = 0; i < count; i++) {
            printf("%d", b[i] + 1); 
			if (i < count - 1) {
                printf(",");
            }
        }
        printf("\n");
    }

   
}

