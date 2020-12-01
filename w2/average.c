#include <stdio.h>

int main()
{
    int a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    double average = (a + b) / 2.0;
    printf("%d和%d的平均数为：%f", a, b, average);

    return 0;
}