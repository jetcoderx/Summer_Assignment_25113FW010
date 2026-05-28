#include<stdio.h>
int main()
{
    int n,i=1,prdct=1;

    printf("Enter a number:");
    scanf("%d",&n);

    while(i<=n){
        prdct=prdct*i;
        i++;
    }

    printf("Factorial of given number is %d",prdct);
    return 0;
}