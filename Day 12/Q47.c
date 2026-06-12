/*Write a program to Write function for 
Fibonacci.*/
#include<stdio.h>
int fibonacci(int n)
{
    int i,a=0,b=1,c;
    
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a);

        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int num;
    printf("Enter the number of terms :");
    scanf("%d",&num);

    fibonacci(num);
    return 0;

}