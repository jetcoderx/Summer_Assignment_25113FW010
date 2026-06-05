//Write a program to Find x^n without pow().
#include<stdio.h>
int main(){

    int ans=1,num,pow,i;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("Enter power:");
    scanf("%d",&pow);

    for(i=1; i<=pow;i++)
    {
        ans=ans*num;

    }
    
     printf("%d^%d = %d\n",num,pow,ans);

     return 0;


}
