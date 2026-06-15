/*Write a program to Rotate array right. */
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

    temp=A[n-1];
    
    for(i=n-1;i>0;i--)
    {
        A[i]=A[i-1];

    }

    A[0]=temp;
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;

}    