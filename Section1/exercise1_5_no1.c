/*1. Change the algorithm for the metric conversion program to convert distance in kilometers to miles.*/
#include <stdio.h>
#define CONVERSION_CONSTANT_MILES_KMS 1.609

int main(){
    double miles, 
        kms;
    
    printf("Enter kilometers that you want to convert >> ");
    scanf ("%lf", &kms);

    miles = kms / CONVERSION_CONSTANT_MILES_KMS;

    printf("That equals to %f miles", miles);

    return 0;
}