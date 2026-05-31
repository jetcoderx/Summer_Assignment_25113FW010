//Write a program to Check whether a number is prime. 
#include<stdio.h>
int main()
{
    int num,i=2,count=0;

    printf("Enter a number:");
    scanf("%d",&num);

    while(i<=num)
     {
        if(num%i==0)
        {
           count=1;
        }
        
        i=i+1;
        break;
     }
    if (count==0)
    printf("PRIME NUMBER:)");

    else
    printf("NOT PRIME NUMBER:");

    return 0;

}