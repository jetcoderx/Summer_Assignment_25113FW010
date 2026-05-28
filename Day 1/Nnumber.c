//Write a program to Calculate sum of first N natural numbers. 
#include<stdio.h>
int main()
{
    int n,i=0,sum=0;

    printf("Enter a number:");
    scanf("%d", &n);

    while(i<=n){
        sum=sum+i;
        i++;

    }
    printf("Sum of %d number is %d",n,sum);
  
    return 0;
    
}