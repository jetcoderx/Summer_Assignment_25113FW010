/*Write a program to Frequency of an element. */
#include<stdio.h>
int main()
{
    int A[100],n,i,key,count=0;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element A[%d]:",i);
        scanf("%d",&A[i]);
    }

    printf("Enter element to find frequency:");
    scanf("%d",&key);


    for(i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            count++;
        }
        
    }
    printf("Frequency of %d is %d",key,count);

    return 0;

}
