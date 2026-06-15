/*Write a program to Move zeroes to end*/
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
    int j=n-1;
    for(i=0;i<n;i++)
    {
        if(A[i]==0)
        {
        A[i]=A[j];
        A[j]=0;
        j--;
        }
        else
        continue;
    }
        for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}