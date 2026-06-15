/*Write a program to Input and display array. */
#include<stdio.h>
int main()
{
    int A[100],n,i;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element A[%d]:",i);
        scanf("%d",&A[i]);
    }

    for(i=1;i<=n;i++)
    {
        printf("%d\n",A[i]);

    }

    return 0;
}