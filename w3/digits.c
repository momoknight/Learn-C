#include <stdio.h>

int main()
{
    int x;
    int n = 0;

    printf("Please enter an integer number: ");
    scanf("%d", &x);

    do
    {
        x /= 10;
        n++;
    } while (x > 0);

    printf("%d digits.\n", n);

    return 0;
}