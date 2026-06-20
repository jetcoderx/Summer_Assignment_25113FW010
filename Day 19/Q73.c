/*Write a program to Add matrices. */
#include <stdio.h>

int main() {
    int A[100][100],B[100][100],sum[100][100],r,c,i,j;

    printf("Enter the rows and column of matrices : ");
    scanf("%d %d",&r,&c);

    printf("Enter first matrix" );

    for(i = 0; i < r; i++) {
        for(j=0;j<c;j++)
        {
            printf("Enter element A[%d][%d]",i,j);
            scanf("%d", &A[i][j]);
        }
    }
     printf("Enter second matrix" );
       for(i = 0; i < r; i++) 
       {
            for(j=0;j<c;j++)
          {
            printf("Enter element B[%d][%d]",i,j);
            scanf("%d", &A[i][j]);
           }
        }

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               sum[i][j]=A[i][j]+B[i][j];
               
            }
            
        }
        printf("Sum 0of both the matrics is:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
        return 0;
    }


