//Write a program to Convert decimal to binary.
#include<stdio.h>
int main(){

    int decimal,bin[100],i=0;

    printf("Enter a decimal number:");
    scanf("%d",&decimal);

    if (decimal==0)
    {
        printf("Binary =0 ");
    
    }

    while(decimal>0)
    {
        bin[i]=decimal%2;
        i++;
        decimal=decimal/2;
    }

    for(int j= i-1; j>=0; j--)
    {
        printf("%d",bin[j]);

    }

    return 0;
    
}