#include <stdio.h>

void main() {
    int a[50][50],b[50][50], i, j,row,col,ans[50][50];

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
    
    //matrix b
    printf("\nEnter Value for second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
        	printf("Enter Number For [%d,%d] : ",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n\nMatrix B\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            ans[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("\n\nMatrix Ans\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    
}
