#include<stdio.h>
#include<math.h>

int main(){
    int n,count=0,copy,i,sum=0,digit;

    printf("Enter the number:");
    scanf("%d",&n);

    copy=n;

    while (n!=0)
    {
        n=n/10;
        count++;
    }


    i=copy;

    while(copy!=0)
    {
        digit=copy%10;
        sum+=(int)pow(digit,count);
        copy=copy/10;


    }
    if(sum==i)
    {
        printf("The given number is armstrong number ");
        
    }
    else
    {
        printf("The number is not armstrong ");
    }

    return 0;

    
}