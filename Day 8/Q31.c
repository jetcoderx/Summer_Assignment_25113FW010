/*Write a program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE*/

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j='A';j<='A'+i;j++)
        {
            printf("%c",j);

        }
        printf("\n");
    }
    return 0;
}