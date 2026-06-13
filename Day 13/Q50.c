/*Write a program to Find sum and average of 
array. */
#include<stdio.h>
int main()
{
    int A[100],n,i,sum=0;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element A[%d]:",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+A[i];
    }

    printf("The sum of the all the elements in the array is %d\n",sum);

    printf("The average of the all the elements in the array is %d",sum/n);


}