#include <stdio.h>

int main()
{
    int n;
    int fact = 1;

    printf("Please enter an integer number: ");
    scanf("%d", &n);

    for (;n > 1;n--) {
        fact *= n;
    }

    printf("The result is %d.\n", fact);

    return 0;
}