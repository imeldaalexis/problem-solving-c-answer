// Write a program that asks the user to enter the radius of a circle and then
// computes and displays the circle’s area. Use the formula
// Area = PI * Radius * Radius
// where PI is the constant macro 3.14159.

#include <stdio.h>
#define PI 3.14159

int main(){

    double  radius,                         /*define intial variables*/
            area;

    printf("Enter radius of a circle> ");   /*prompt user to enter radius*/
    scanf("%lf", &radius);

    area = PI * radius * radius;            /*formula of radius*/

    printf("Area of a circle is %lf square cm.", area);
}