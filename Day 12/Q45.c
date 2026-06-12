/*Write a program to Write function for 
palindrome*/

#include<stdio.h>

void pallindrome(int n)

{
    int copy,rem,rev=0;
        copy=n;
        
    while(copy!=0)
    {
        rem=copy%10;
        rev=rev*10+rem;
        copy=copy/10;
    }
    if(n==rev)
    {
    printf("The given number is Pallindrome" );
    }
    else
    {
        printf("The number is not pallindrome");
    }

}

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    pallindrome(num);
    return 0;
}
