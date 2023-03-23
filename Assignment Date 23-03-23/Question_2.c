/*
2.	Write a C program to input a character and check whether the character is alphabet or not using Conditional/Ternary operator ?
How to check alphabets using conditional operator in C programming
*/
#include <stdio.h>

void main()
{
    char c;
 
    printf("Enter a character: ") ;
    scanf("%c",&c);
 
    ((c>='a' && c<='z') || (c>='A' && c<='Z')) ? printf("%c is a alphabet",c) : printf("%c is not a alphabet",c);

}