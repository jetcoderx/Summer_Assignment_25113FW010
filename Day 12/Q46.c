/*Write a program to Write function for 
Armstrong. */
#include<stdio.h>
#include<math.h>
void Armstrong(int n)
{
    int count=0,copy,i,sum=0,digit;
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
}
int main()
{
      int num;
    printf("Enter a number :");
    scanf("%d",&num);

    Armstrong(num);
    return 0;
}