/*Write a program to Find missing number in 
array.*/
#include<stdio.h>
int main()
{
    int i,n,actsum=0,arrsum=0;

    int A[]={1,2,3,4,6,7,8};
    int size=sizeof(A)/sizeof(A[0]);
    n=8;//Number should be from 1 to 8

    actsum= (n*(n+1))/2;

    for(i=0;i<size;i++)
    {
        arrsum=arrsum+A[i];
    }

    printf("Missing number in the array is %d",actsum-arrsum);
    return 0;
}
