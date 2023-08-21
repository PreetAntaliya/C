#include <stdio.h>
#include <string.h>

int main() {
    char a[50];
    int i;

    printf("Enter Any Sentence : ");
    gets(a);

    for ( i = 0; a[i] != '\0'; i++) {
        if(a[i]>='A' && a[i]<='Z'){
           a[i] = a[i] + 32;
        } else {
            a[i] = a[i] - 32;
        }
    }

    printf("The OutPut Is : %s", a);

    return 0;
}

