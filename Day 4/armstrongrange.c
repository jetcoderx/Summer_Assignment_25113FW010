//WAP to print all angstrom number btw 1 to 500 

#include<stdio.h>
#include<math.h>

int main(){

    int i,j,n,count,num;
    double sum;

    printf("Enter the range from 0 to :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    { 
        sum=0;
        count=0;
        j=i;
        
        //to count number of digit present in the number

        while(j!=0)
        {
            count++;
            j=j/10;
        }

        j=i;
        
        // to find the sum 

        while(j!=0)
        {
            n=j%10;
            sum=sum+pow(n,count);
            j=j/10;
        }
        
        if(sum==i)
        printf("\n%d is a armstrong number",i);

    }
    return 0;


}