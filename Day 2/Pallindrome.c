//Write a program to Check whether a number is palindrome. 
#include<stdio.h>
int main()
{
    int n,rem,rev=0,copy;
   
    printf("Enter a number:");
    scanf("%d",&n);

        copy=n;
        
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(copy==rev)
    {
    printf("The given number is Pallindrome" );
    }
    else
    {
        printf("The number is not pallindrome");
    }
    return 0;

}