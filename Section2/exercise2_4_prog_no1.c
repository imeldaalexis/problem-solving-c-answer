/*
*   Programmer: Imelda Alexis Jovita        Date: 26 December 2024
*   Instructor: The Book
*
*/

/* Write a program that stores the values 'X' and 76.1 in separate memory cells.
Your program should get the values as data items and display them again for
the user when done */

#include <stdio.h>

int main(){
    char value1;
    float value2;

    value1 = 'X';
    value2 = 76.0000;

    printf("value1: %c\n", value1);
    printf("value2: %f", value2);
}