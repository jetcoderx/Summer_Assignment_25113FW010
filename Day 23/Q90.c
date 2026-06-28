/*Write a program to Find first repeating 
character.*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int freq[256]={0};

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]!='\n')
        freq[(unsigned char)str[i]]++;
    }

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]!='\n'&& freq[(unsigned char)str[i]]>1){
        printf("First repeaing character is %c",str[i]);
        return 0;
    }
}
    printf("No such characters");
    return 0;    
}
