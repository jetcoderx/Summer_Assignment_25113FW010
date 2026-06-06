//Write a program to Recursive sum of digits. 
#include<stdio.h>
int sumofdigit(int n)
{
    int sum=0;
    if(n==0)
    {
        return sum;
    }
    else
    {
        return sum+n%10+ sumofdigit(n/10);

    }

}
int main()
{
    int num;
    printf("Enter a  number :");
    scanf("%d",&num);

    printf("Sum of digit is  %d",sumofdigit(num));

    return 0;
}