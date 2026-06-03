//Write a program to Check strong number. 
#include<stdio.h>
int main(){
    int num,i,fact=1,sum=0,digit,copy;

    printf("Enter a number :");
    scanf("%d",&num);

    copy=num;

    while (num!=0)
    {
        digit=num%10;
        for(int i=1; i<=digit; i++){
            fact=fact*i;
            

        }
        sum=sum+fact;
        num=num/10;
        fact=1;

    }
     if(sum==copy){
        printf("Strong number");

    }
    else{
        printf("Not Strong number");
    }
    
    return 0;
}
    

