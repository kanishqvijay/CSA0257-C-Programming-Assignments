/*
Write a C program to find sum of all odd numbers from 1 to n using for loop.
How to find sum of all odd numbers in a given range in C programming. 
Logic to find sum of odd numbers in a given range using loop in C
*/
#include <stdio.h>
 
void main()
{
    int n, i, sum;
 	sum = 0;
    printf("Enter n: "); 
    scanf("%d", &n);
    printf("The sum of odd numbers in the range of 1 to %d is:\n",n);
    for (i = 0; i<=n; i++){
        if (i%2 != 0){
            sum = sum + i;
        }
    }
    printf("%d",sum);

}