#include <stdio.h>

int main()
{
    int n;
    int isPrime = 1;

    printf("Please enter an integer number: ");
    scanf("%d", &n);
    if (n == 1)
    {
        isPrime = 0;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("%d is a prime.\n", n);
    } else
    {
        printf("%d isn't a prime.\n", n);
    }

    return 0;
}