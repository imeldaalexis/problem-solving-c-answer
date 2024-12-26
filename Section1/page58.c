#include <stdio.h>          /*printf, scanf definitions */
#define KMS_PER_MILES 1.609 /*conversion constant       */

int main(void){
    double miles,/*input distance in miles*/
             kms;  /*input distance in kms*/
    
    /*get the distance in miles*/
    printf("Enter the distance in miles >> ");
    scanf("%lf", &miles);

    /*converts the distance into kilometers*/
    kms =  miles * KMS_PER_MILES;

    /*display calculated distance of kilometers*/
    printf("Distance in miles >> %f", kms);

    return 0;
}