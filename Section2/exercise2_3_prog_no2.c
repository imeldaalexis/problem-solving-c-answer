// a. Write a statement that displays the following line with the value of the
// type int variable n before the period.
// The value of n is ___________.

// b. Assuming that side and area are type double variables containing the
// length of one side in cm and the area of a square in square cm, write a
// statement that will display this information in this form:
// The area of a square whose side length is ______ cm is ______ square cm.


#include <stdio.h>

int main(){
    int n =  5;                             /*Defining variables for n*/
    printf("The value of n is %d.\n", n);     /*Output results for n*/

    int length, area;
    length = n;
    area = length * length;
    printf("The area of a square whose side length is %d cm is %d square cm.\n", length, area);
}

