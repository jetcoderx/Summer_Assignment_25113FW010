/*Write a program to Write function to find sum 
of two numbers. */
#include<stdio.h>
int sum(int x,int y)
{
    int sum=x+y;
    return sum;

}
int main()
{
    int a,b;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    printf("sum of Both the numbers is %d",sum(a,b));
    return 0;
}