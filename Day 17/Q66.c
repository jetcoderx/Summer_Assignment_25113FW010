/*Write a program to Union of arrays. */
 #include <stdio.h>

int main()
{
    int A[100], B[100], U[200];
    int n1, n2, i, j, k = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    
    for(i = 0; i < n1; i++)
        scanf("%d", &A[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)

        scanf("%d", &B[i]);

    /* Copy first array to Union array */
    for(i = 0; i < n1; i++)
        U[k++] = A[i];

    /* Add only unique elements from second array */
    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < k; j++)
        {
            if(B[i] == U[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
            U[k++] = B[i];
    }

    printf("Union Array: ");
    for(i = 0; i < k; i++)
        printf("%d ", U[i]);

    return 0;
}