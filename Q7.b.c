#include<stdio.h>

int main(){
    int row, col;
    printf("Enter rows and columns:");
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col], c[row][col];
    printf("Enter matrix A:\n");
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    
    printf("Enter matrix B:\n");
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Sum matrix:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
    
}