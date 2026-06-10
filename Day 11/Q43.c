/*Write a program to Write function to check 
prime. */\
#include<stdio.h>
#include<stdbool.h>
bool primecheck(int x)
{
 if(x <= 1)
        return false;

    for(int i = 2; i <= x / 2; i++)
    {
        if(x % i == 0)
            return false;
    }

    return true;
}
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d",&num);

    if(primecheck(num))
    printf("PRIME NUMBER");
    else
    printf("NOT PRIME NUMBER");

    return 0;
}