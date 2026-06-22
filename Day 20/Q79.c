/*Write a program to Find row-wise sum. */
#include<stdio.h>
int main()
{
    int A[100][100],i,j,r,c;

     printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

     printf("Enter elements of matrix:\n");

    for (i = 0; i < r; i++)
        for ( j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

            printf("Row-wise sum of the matrix:\n");
    for (i = 0; i < r; i++){
        
        int sum = 0;
        for (j = 0; j < c; j++)
            sum += A[i][j];
        printf("Sum of row %d: %d\n", i + 1, sum);
    }

    return 0;






}