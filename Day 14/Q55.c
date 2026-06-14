/*Write a program to Second largest element.*/
#include<stdio.h>
int main()
{
    int A[100],n,i,max,max2,p1=-1;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element A[%d]:",i);
        scanf("%d",&A[i]);
    }
    max=A[0];
    max2=A[0];
    if(n < 2)
    {
        printf("Need at least 2 elements.\n");
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
            p1=i;
        }

    }
    for(i=0;i<n;i++)
    {
        if(i==p1)
        continue;
        else if(max2<A[i])
        max2=A[i];
    }
    printf("The first largest is %d and second largest is %d",max,max2);

    return 0;

}