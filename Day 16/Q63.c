/*Write a program to Find pair with given sum.*/
#include<stdio.h>
int main()
{
    int A[100],i,n,sum;

    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the sum");
    scanf("%d",&sum);

    for(i=0;i<n;i++)
    {
        printf("Enter element A[%d]",i);
        scanf("%d",&A[i]);
    }
     for(i=0;i<n-1;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==sum)
            {
             printf("(%d, %d)\n", A[i], A[j]);
            }
        }
     }
}