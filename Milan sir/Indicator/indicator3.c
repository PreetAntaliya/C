#include <stdio.h>

void check(int a, int b, int c);

void main() {
    int x, y, z;

    printf("Enter Any Three Numbers :- \n");
    scanf("%d %d %d", &x, &y, &z);

    check(x, y, z);

}

void check(int a, int b, int c) {
    if (a >= b && a >= c) {
        printf("%d Is The Biggest Number!\n", a);
    } else if (b >= a && b >= c) {
        printf("%d Is The Biggest Number!\n", b);
    } else {
        printf("%d Is The Biggest Number!\n", c);
    }
}

