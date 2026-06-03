//Write a program to Find largest prime factor
#include<stdio.h>
#include<stdbool.h>

int isprime(int n)
{
    int i,count=0;

    if(n<2){
        return false;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count=count+1;
            break;
        }
    } 
    if (count==0)
    return true;

    else
    return false;
}
int main(){
    int num,i,factor,largestprime;

    printf("Enter a number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            factor=i;

            if(isprime(factor))
            {
                largestprime=factor;


            }
            else{
                
                continue;
            }
            

        }

    }
    printf("Largest prime factor is %d",largestprime);
   
}