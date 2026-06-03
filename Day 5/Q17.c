//Write a program to Check perfect number. 
#include<stdio.h>
int main (){
    int num,i,sum=0;

    printf("Enter a number:");
    scanf("%d",&num);

    for(i=1;i<num;i++){

        if(num%i==0){
            sum=sum+i;
        }

    }

    if(sum==num){
        printf("Perfect number");

    }
    else{
        printf("Not perfect number");
    }
    
    return 0;
}