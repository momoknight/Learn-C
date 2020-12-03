#include <stdio.h>

int main()
{
    int n;

    printf("Please enter an integer number: ");
    scanf("%d", &n);

    int digit;
    int result = 0;
    while (n > 0)
    {
        digit = n % 10;
        result = result * 10 + digit;
        n = n / 10;
    }
    printf("The reverse number is %d.", result);
    
    return 0;
}