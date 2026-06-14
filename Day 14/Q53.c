/*Write a program to Linear search.*/
#include<stdio.h>
int main()
{
    int A[100],n,i,key,loc=-1;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element A[%d]:",i);
        scanf("%d",&A[i]);
    }
    
    printf("Enter searching elements");
    scanf("%d",&key);

    for (i=0;i<n;i++)
    {
        if (key==A[i])
        {
            loc=i;
            printf("Element %d is found at %d index value:",key,i);
            break;
        }
         
    }

    if(loc==-1)
    printf("Element not found");

    return 0;

}
