/*Write a program to Count vowels and 
consonants.*/
#include<stdio.h>
int main()
{
    char str[100];
    int len=0,con=0,vow=0;

    printf("Enter string:");
    fgets(str, sizeof(str), stdin);

    while(str[len]!='\0')
    {
        len++;
    }
    for(int i=0;i<len;i++)
    {
       if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'
        ||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vow++;

        else if(str[i]>='A' ||str[i]<'Z' || str[i]>='a' || str[i]<='z')
        con++;
    }

    printf("Number of vowels and consonant in the string is %d and %d",vow,con);
    return 0;
}