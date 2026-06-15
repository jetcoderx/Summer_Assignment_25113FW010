/*Write a program to Reverse array. */
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
    for(i=0;i<n/2;i++)
    {

        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        j--;

    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}