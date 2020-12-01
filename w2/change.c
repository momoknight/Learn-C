// 变量
// 变量是存放数据的地方
// <变量类型> <变量名称>;
#include <stdio.h>

int main()
{
    int price = 0;
    printf("请输入金额（元）：");
    scanf("%d", &price);

    int change = 100 - price;

    printf("找您%d元。\n", change);
}