#include <stdio.h>

int main(){
    int m, n;                           /*initializing variables*/

    printf("Enter two integers >> ");   /*prompt message*/
    scanf("%d%d", &m, &n);              /*scanning two integers: it'll scan the first angka up until spasi/enter*/

    m = m + 5;                          /*formula*/
    n = 3 * n;                          /*formula*/

    printf("m = %d\nn = %d", m, n);     /*printing output*/
}