#include <stdio.h>

// 函数的原型声明
// void sum(int, int); 可行：编译器只检查参数的类型，但对人类读者来说下面的代码有意义，
// 对编译器没有意义。
void sum(int begin, int end);

int main()
{
    sum(1, 10);
    sum(20, 30);
    sum(30, 45);

    return 0;
}

// 函数的定义
void sum(int begin, int end)
{
    int sum = 0;
    for (int i = begin; i < end; i++)
    {
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin, end, sum);
}