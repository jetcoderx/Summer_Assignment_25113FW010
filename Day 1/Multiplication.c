#include<stdio.h>
int main()
{
    int n,i=1,prdct;

    printf("Enter a number:");
    scanf("%d",&n);

    while(i<=10){
        prdct=n*i;
        printf("%d * %d = %d\n",n,i,prdct);
        i++;

    }
    return 0;
}