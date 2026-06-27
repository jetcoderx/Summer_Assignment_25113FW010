/*Write a program to Character frequency. */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};  // Array to store frequency of ASCII characters

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read full line including spaces

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Display frequency
    printf("\nCharacter frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
