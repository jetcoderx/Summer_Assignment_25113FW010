/*Write a program to Find diagonal sum.*/
#include<stdio.h>
int main() {
    int A[100][100],sum=0,r,c,i,j;

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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");

    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            sum+=A[i][j];
        }
    }
    printf("Sum of the diagonal element is %d",sum);

    return 0;
}
