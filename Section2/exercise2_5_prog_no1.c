/*
*   Programmer: Imelda Alexis Jovita        Date: 26 December 2024
*   Instructor: The Book                    Problem: Write Equation
*
*/

#include <stdio.h>

int main(){
    double q, k, A, T1, T2, L;

    q = (k * A * (T1 - T2)) / L ;

    char value1,
         value2;
    int  value3;
    double value4;

    value1 = 'A';
    printf("Enter value for value2> ");
    scanf("%c", &value2);
    printf("Enter value for value3> ");
    scanf("%d", &value3);
    printf("Enter value for value4> ");
    scanf("%lf", &value4);

    printf("value1: %c\nvalue2: %c\nvalue3: %d\nvalue4: %f", value1, value2, value3, value4);

}
