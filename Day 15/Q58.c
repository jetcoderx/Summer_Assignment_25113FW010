/*Write a program to Rotate array left. */
#include<stdio.h>
int main()
{
    int A[100],i,n,temp;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element A[%d]",i);
        scanf("%d",&A[i]);
    }
    temp=A[0];

    for(i=0;i<n-1;i++)
    {

        A[i]=A[i+1];
    }
    A[n-1]=temp;

    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;



}