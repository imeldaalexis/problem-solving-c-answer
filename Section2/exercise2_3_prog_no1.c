// Write a statement that asks the user to type three integers and another statement that stores 
// the three user responses into first, second, and third.

#include <stdio.h>

int main(){
    int first,                                      /*define initial variables*/ 
        second,
        third;
    
    printf("Type three integers> ");                /*prompt user to fill it up*/
    scanf("%d%d%d", &first, &second, &third);       /*store user input to variables*/

    printf("Inputted numbers are \nFirst: %d\nSecond: %d\nThird: %d", first, second, third);
}