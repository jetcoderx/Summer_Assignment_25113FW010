#include <stdio.h>
int main()
{
    int A[100][100], n, i, j, count= 1;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(A[i][j] != A[j][i])
            {
              count = 0;
                break;
            }
        }
        if(count== 0)
            break;
    }

    if(count == 1)
        printf("The matrix is Symmetric.\n");
    else
        printf("The matrix is Not Symmetric.\n");

    return 0;
}