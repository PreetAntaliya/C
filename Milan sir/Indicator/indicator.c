#include <stdio.h>
void swaping(int *x, int *y);

void main() {
    int a, b;

    printf("Enter Value Of A : ");
    scanf("%d", &a);

    printf("Enter Value Of B : ");
    scanf("%d", &b);

    swaping(&a, &b);

    printf("A = %d\nB = %d", a, b);

}

void swaping(int *x, int *y) {
	int z;
    z = *x;
    *x = *y;
    *y = z;
}

