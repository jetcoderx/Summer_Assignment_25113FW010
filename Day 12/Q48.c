/*Write a program to Write function for perfect 
number.*/
#include<stdio.h>
int perfectNum(int num)
{
    int i,sum=0;

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


}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    perfectNum(n);
    return 0;
}
