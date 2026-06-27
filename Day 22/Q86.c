/*Write a program to Count words in a 
sentence. */
#include<stdio.h>
#include<string.h>
int main(){
  
    char str[100];
    printf("Enter string: ");
    scanf("%[^\n]",str);

    int len =strlen(str);
    int i=0,count=1;

    while(i< len){
        if(str[i]==' ')
         count++;
         i++;
    }

    printf("There are %d words in the string",count);

    return 0;

}