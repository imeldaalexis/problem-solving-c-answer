/*
int color, lime, straw, red, orange;
double white, green, blue, purple, crayon;
Evaluate each of the statements below using the following values: color is 2,
crayon is −1.3, straw is 1, red is 3, purple is 0.3E+1.
a. white = color * 2.5 / purple;
b. green = color / purple;
c. orange = color / red;
d. blue = (color + straw) / (crayon + 0.3);
e. lime = red / color + red % color;
f. purple = straw / red * color;
*/

#include <stdio.h>

int main(){
    int color, lime, straw, red, orange;
    double white, blue, purple, crayon, green;

    color = 2;
    crayon = -1.3;
    straw = 1;
    red = 3;
    purple = 0.3E+1;

    white = color * 2.5 / purple;       /*a. white = color * 2.5 / purple;*/
    printf("%f\n", white);                /*my guess is 1.66*/
    green = color / purple;             /*b. green = color / purple;*/
    printf("%f\n", green);                /*my guess is 0.66*/
    orange = color / red;               /*c. orange = color / red;*/
    printf("%d\n", orange);                /*my guess is 0.0*/
    blue = (color + straw) / (crayon + 0.3); /*d. blue = (color + straw) / (crayon + 0.3);*/
    printf("%f\n", blue);                   /*my guess is -3.0*/
    lime = red / color + red % color;   /*e. lime = red / color + red % color;*/
    printf("%d\n", lime);                   /*my guess is 2*/
    purple = straw / red * color;       /*f. purple = straw / red * color;*/
    printf("%f\n", purple);                   /*my guess is 0.0*/
}