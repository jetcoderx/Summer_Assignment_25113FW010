#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int maxFreq = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n' && freq[(unsigned char)str[i]] > maxFreq)
        {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}