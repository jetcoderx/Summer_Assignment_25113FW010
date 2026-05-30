#include<stdio.h>
int main()
{
    int n,rem,pdt=1;

    printf("Enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        pdt=pdt*rem;
        n=n/10;
    }
    printf("Product of the given number is %d",pdt);
    return 0;
}