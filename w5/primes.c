#include <stdio.h>

int main()
{
    int n;

    printf("100以内的素数是：\n");
    for (n = 2; n < 100; n++) {
        int isPrime = 1;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", n);
        }
    }

    return 0;
}