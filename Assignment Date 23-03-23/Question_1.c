/*
Write a C program to input three numbers from user and find maximum between three numbers using conditional/ternary operator
How to find maximum between three numbers using conditional operator.
*/

#include <stdio.h>
 
void main()
{
    int a, b, c;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    int biggest = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\nThe biggest number is : %d", biggest) ;
}