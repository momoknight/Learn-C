#include <stdio.h>

int main()
{
    int one, two, five;
    int money;
    int exit = 0;

    printf("请输入需要组合成多少面值（10以下)的纸币：");
    scanf("%d", &money);

    for (one = 0; one <= money * 10; one++) {
        for (two = 0; two <= money * 10 / 2; two++) {
            for (five = 0; five <= money * 10 / 5; five++) {
                if (one * 1 + two * 2 + five * 5 == money * 10) {
                    printf("%d元可以有%d张1角、%d张2角和%d张5角组成。", money, one, two, five);
                    goto out;
                    // exit = 1;
                    // break;
                }
            }
            // if (exit) break;
        }
        // if (exit) break;
    }
out:
    return 0;
}