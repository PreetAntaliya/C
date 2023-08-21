#include <stdio.h>

void main() {
    int a[50][50],b[50][50], i, j,row,col;

    printf("Enter Value Of Rows :- ");
    scanf("%d", &row);
    printf("Enter Value Of Cols :- ");
    scanf("%d", &col);
    
    //matrix a
    printf("Enter Value for first matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
        	printf("Enter Number For [%d,%d] : ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n\nMatrix A\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
	}
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            b[j][i] = a[i][j];
        }
    }
    
    printf("\n\nTranspose of A matrix\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    
}
