#include <stdio.h>

int main() {
    char a[100];
    char *pointer;
    int length = 0;

    printf("Enter a string: ");
    gets(a);

    pointer = a;

    while (*pointer != '\0') {
        length++;
        pointer++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}

