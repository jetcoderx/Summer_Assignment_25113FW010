/*Write a program to Transpose matrix. */
#include <stdio.h>

int main() {
    int A[100][100],r,c,i,j;

    printf("Enter the rows and column of matrices : ");
    scanf("%d %d",&r,&c);

    printf("Enter matrix\n" );

    for(i = 0; i < r; i++) {
        for(j=0;j<c;j++)
        {
            printf("Enter element A[%d][%d]",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Transpose of a matrix is \n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",A[i][j]);
        }

    }
    return 0;
}