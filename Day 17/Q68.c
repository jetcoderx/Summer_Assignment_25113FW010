/*Write a program to Find common elements. */
#include <stdio.h>

int main()
{
    int A[100], B[100], I[100];
    int n1, n2, i, j, k = 0;
    

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
    {
    printf("Enter A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
    {
        printf("Enter B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(A[i] == B[j])
            {
                I[k] = A[i];
                k++;
                break;
         }
        }
    }

    printf("Intersection Array: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", I[i]);
    }

    return 0;
}