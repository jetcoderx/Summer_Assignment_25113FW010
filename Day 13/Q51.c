/*Write a program to Find largest and smallest 
element. */
#include<stdio.h>
int main()
{
    int A[100],n,i,largest=0;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element A[%d]:",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(largest<A[i])
        largest=A[i];
    }
    printf("The largest element in the array is %d",largest);

    return 0;

}