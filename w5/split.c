#include <stdio.h>

int main()
{
    int n;

    printf("Please enter an integer number: ");
    scanf("%d", &n);
    int t = n;

    // 算出n为几位数
    int count = 0;
    int mask = 1;
    while (n > 9) {
        count++;
        mask *= 10;
        n /= 10;
    }
    printf("mask = %d\n", mask);
    do
    {
        int d = t / mask;
        printf("%d", d);
        if (mask > 9) {
            printf(" ");
        }
        t %= mask;
        mask /= 10;
    } while (mask > 0);
    
    return 0;
}