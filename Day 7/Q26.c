//Write a program to Recursive Fibonacci.

#include<stdio.h>

int fibonacci(int n)
{
    if(n==0)
    return 0;

    else if(n==1)
    return 1;

    else
    return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
    int num,i;
    printf("Enter a  number of terms :");
    scanf("%d",&num);

    for(i=0;i<num; i++){

    printf("%d\t",fibonacci(i));
    }

    return 0;
}