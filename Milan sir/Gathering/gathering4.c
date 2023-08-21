#include <stdio.h>

int oddEven(int no);

int main() {
    int no;

    printf("Enter A Number: ");
    scanf("%d", &no);

    if (oddEven(no)) {
        printf("%d Is Even Number.\n", no);
    } else {
        printf("%d Is Odd Number.\n", no);
    }

    return 0;
}

int oddEven(int no) {
    if (no%2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

