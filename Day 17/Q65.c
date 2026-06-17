/*Write a program to Merge arrays. */
#include<stdio.h>
int main()
{
    int A[100],B[100],C[100],i,n1,n2;

    printf("Enter size of 1st array:");
    scanf("%d",&n1);

    for(i=0;i<n1;i++)
    {
        printf("Enter element A[%d]",i);
        scanf("%d",&A[i]);
    }
    printf("Enter size of second array:");
    scanf("%d",&n2);

     for(i=0;i<n2;i++)
    {
        printf("Enter element B[%d]",i);
        scanf("%d",&B[i]);
    }

    for(i=0;i<n1;i++)
    {
        C[i]=A[i];
    }

    for(int j=0;j<n2;j++)
    {
        C[i]=B[j];
        i++;
    }

    printf("Merged array\n");

    for(i=0;i<(n1+n2);i++)
    {
        printf("%d",C[i]);
    }

    return 0;
}

