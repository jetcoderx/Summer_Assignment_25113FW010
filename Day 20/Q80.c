/*Write a program to Find column-wise sum.*/
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

            printf("Column-wise sum of the matrix:\n");
    for (j = 0; j < c; j++){
        
        int sum = 0;
        for (i = 0; i < r; i++)
            sum += A[i][j];
        printf("Sum of column %d: %d\n", j + 1, sum);
    }

    return 0;

}