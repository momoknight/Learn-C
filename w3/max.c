#include <stdio.h>

int main()
{
    int a, b;

    printf("Please enter two numbers: ")    ;
    scanf("%d %d", &a, &b);

    /* int max = 0;
    if (a > b) {
        max = a;
    } else {
        max = b;
    } */

    int max = a;
    if (b > a) {
        max = b;
    }

    printf("The max number is %d", max);

    return 0;
}