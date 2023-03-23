/*
Write a C program to find maximum occurring character in a string using loop.
How to find highest frequency character in a string using loop in C programming.
Program to find the highest occurring character in a string in C.
Logic to find maximum occurring character in a string in C programming.
*/



#include <stdio.h>
#include <string.h>

void main() {
    char str[20];
    int freq[256] = {0};
    int big_freq = -1;
    char high_char;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]] += 1;
    }

    for (int i = 0; i < strlen(str); i++) {
        if (freq[str[i]] > big_freq) {
            big_freq = freq[str[i]];
            high_char = str[i];
        }
    }

    printf("The max occurring character in the string is '%c' with frequency %d.", high_char, big_freq);

}