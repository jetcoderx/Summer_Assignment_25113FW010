/*Write a program to Find maximum frequency 
element. */
#include<stdio.h>
int main()
{
    int A[100],i,n,maxcount,freqElement;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element A[%d]",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(A[i]==freqElement)
        break;
        else if(A[i]==A[j]){
        count++;
        if(maxcount<count)
        freqElement=A[i];
        }
    }
    maxcount=count; 
    }
    printf("%d",freqElement);
    return 0;

}