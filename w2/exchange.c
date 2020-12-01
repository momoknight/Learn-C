#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Please enter two nums：");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("The result: a is %d, b is %d", a, b);

    return 0;
}