#include <stdio.h>

int main()
{
    int a, b;
    int ret;

    printf("Please enter two integer numbers: ");
    scanf("%d %d", &a, &b);

    // 枚举法
    /* int min = a < b ? a : b;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0) {
            if (b % i == 0) {
                ret = i;
            }
        }
    }
    printf("The gcd is %d.", ret); */

    // 辗转相除法
    // a = 8 b = 3
    // a % b = 2
    // a = 3, b = 2
    // a % b = 1
    // a = 2, b = 1
    // a % b = 0
    // a = 1, b = 0
    while (b != 0)
    {   
        int t = a % b;
        a = b;
        b = t;
    }
    printf("The gcd is %d.", a);

    return 0;
}