/*Write a program to Remove duplicates from 
array. */
#include<stdio.h>
int main()
{
    int A[100],i,n,k;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element A[%d]",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(A[i]==A[j]){
           for(k=j;k<n;k++)
           {
            A[k]=A[k+1];
           }
           n--;
           j--;
        }
    }
}
printf("After Removing duplicate elements:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}