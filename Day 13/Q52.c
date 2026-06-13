/*Write a program to Count even and odd 
elements.*/
#include<stdio.h>
int main()
{
    int A[100],n,i,odd=0,even=0;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element A[%d]:",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("The total numbers of odd and even numbers present in the array is %d and %d",odd,even);
    return 0;

}