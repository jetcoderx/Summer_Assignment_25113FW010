//Write a program to Count digits in a number.
#include<stdio.h>
int main()
{
    int rem ,n,count=0;

    printf("Enter a number :");
    scanf("%d",&n);

    while(n>0){
        rem=n%10;
        count++;
        n=n/10;

    }
    printf("There are %d digit in given number ",count);
    return 0;

}