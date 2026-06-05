//Write a program to Convert binary to decimal
#include<stdio.h>
int main(){

    int bin,decimal=0,rem,base=1;

    printf("Enter binary number :");
    scanf("%d",&bin);

    while(bin>0)
    {
        rem=bin%10;
        decimal=decimal+rem*base;
        base=base*2;
        bin=bin/10;
    }

    printf("Decimal number is %d",decimal);

    return 0;
}