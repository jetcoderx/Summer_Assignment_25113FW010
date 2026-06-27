/*Write a program to Check palindrome string*/
#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int i = 0, j = strlen(str) - 1;

    while (i < j) {
        char left = str[i];
        char right = str[j];

        if (left >= 'A' && left <= 'Z') {
            left = left + ('a' - 'A');
        }
        if (right >= 'A' && right <= 'Z') {
            right = right + ('a' - 'A');
        }

        if (left != right) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
     scanf("%[^\n]", str);
     
    if (is_palindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
