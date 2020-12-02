#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = 0;
    if (a > b) {
        if (a > c) {
            max = a;
        } else {
            max = c;
        }
    } else
    {
        if (b > c) {
            max = b;
        } else {
            max = c;
        }
    }

    printf("The max number is: %d", max);

    return 0;
}