/*Write a program to Find duplicates in array. */
#include<stdio.h>
int main()
{
    int A[100],count=0,n,i;

    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element A[%d]:",i);
        scanf("%d",&A[i]);
    }
    printf("Duplicates element are:");
    for(i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
        {
            if(A[i]==A[j])
            count++;
        }
    
     if(count>0)
     {
        int alreadyPrinted=0;
        for(int k=0;k<i;k++)
        {
            if(A[k]==A[i]){
            alreadyPrinted=1;
            break;
        }
     }
     if(!alreadyPrinted)
     {
        printf("%d",A[i]);
     }
     
    }

}
return 0;
}