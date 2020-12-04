// 练习3-2 计算符号函数的值
/* #include <stdio.h>

int main()
{
    int n;
    int ret;

    scanf("%d", &n);

    if (n < 0)
    {
        ret = -1;
    } else if (n > 0)
    {
        ret = 1;
    } else
    {
        ret = 0;
    }
    
    printf("sign(%d) = %d", n, ret);
    
    return 0;
} */

// 练习3-3 统计学生平均成绩与及格人数
/* #include <stdio.h>

int main()
{
    int n, score;
    int count = 0, sum = 0;
    double average;

    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        if (score >= 60) {
            count++;
        }
        sum += score;
        }
        average = 1.0 * sum / n;
    } else
    {
        count = 0;
        average = 0;
    }
    printf("average = %.1f\ncount = %d", average, count);

    return 0;
} */

// 练习3-4 统计字符
/* #include <stdio.h>

int main()
{
    char c;
    int lettercnt = 0;
    int blackcnt = 0;
    int digitcnt = 0;
    int othercnt = 0;

    for (int i = 0; i < 10; i++)
    {
        c = getchar();
        if (c >= 48 && c <= 57) {
            digitcnt++;
        } else if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
            lettercnt++;
        } else if (c == 32 || c == 10)
        {
            blackcnt++;
        } else
        {
            othercnt++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", lettercnt, blackcnt, digitcnt, othercnt);

    return 0;
} */

// 练习3-5 输出闰年
/* #include <stdio.h>

int main()
{
    int y;
    int isLeap = 0;
    scanf("%d", &y);

    if (y <= 2000 || y > 2100) {
        printf("Invalid year!");
    } else
    {
        int i;
        for (i = 2001; i <= y; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            {
                printf("%d\n", i);
                isLeap = 1;
            }
        }
        if (i > y && isLeap == 0)
        {                       
            printf("None");
        } 
    }
    
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int score;
    scanf("%d", &score);

    if (score >= 90) {
        printf("A");
    } else if (score >= 80 && score < 90)
    {
        printf("B");
    } else if (score >= 70 && score < 80)
    {
        printf("C");
    } else if (score >= 60 && score < 70)
    {
        printf("D");
    } else
    {
        printf("E");
    }
    
    return 0;
} */

// 练习3-8 查询水果价格
/* #include <stdio.h>

int main()
{
    int id;
    
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");

    for (int i = 0; i < 5; i++)
    {
        double price;
        scanf("%d", &id);
        if (id == 0) break;
        switch (id)
        {
        case 1:
            price = 3.0;
            break;
        case 2:
            price = 2.5;
            break;
        case 3:
            price = 4.1;
            break;
        case 4:
            price = 10.2;
            break;
        default:
            price = 0.00;
            break;
        }
        
        printf("price = %.2f\n", price);
    }
    
    return 0;
} */

// 习题3-1 比较大小
/* #include <stdio.h>

int main()
{
    int a, b, c, min;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b)
    {
        min = b;
        b = a;
        a = min;
    }

    if (a > c)
    {
        min = c;
        c = a;
        a = min;
    }
    
    if (b > c)
    {
        min = c;
        c = b;
        b = min;
    }
    
    printf("%d->%d->%d", a, b, c);

    return 0;
} */

// 习题3-2 高速公路超速处罚
/* #include <stdio.h>

int main()
{
    int speed, limit;
    scanf("%d %d", &speed, &limit);
    double limit1 = limit * 0.1;
    double limit2 = limit * 0.5;
    printf("Limit:%d\n", limit);
    int over = speed - limit;
    double per = 100.0 * over / limit;

    if (over >= limit2)
    {
        printf("Exceed %.0f%%. License Revoked", per);
    } else if (over >= limit1)
    {
        printf("Exceed %.0f%%. Ticket 200", per);
    } else
    {
        printf("OK");
    }
    
    return 0;;
} */

// 习题3-3 出租车计较
/* #include <stdio.h>

int main()
{
    double range;
    int wait;
    
    scanf("%lf %d", &range, &wait);
    double fare;
    if (range > 10)
    {
        fare = 24 + (range - 10) * 3;
    } else if (range > 3 && range <= 10)
    {
        fare = 10 + (range - 3) * 2;
    } else
    {
        fare = 10;
    }
    fare = fare + wait / 5 * 2;
    printf("%.0f", fare);

    return 0;
} */

// 习题3-4 统计学生成绩
// 改：算分数的时候，用score/10得到的数通过switch-case来判断
/* #include <stdio.h>
int main()
{
    int n, score;
    scanf("%d", &n);
    int a, b, c, d, e;
    a = b = c = d = e = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score);
        if (score >= 90)
        {
            a++;
        } else if (score >= 80 && score < 90)
        {
            b++;
        } else if (score >= 70 && score < 80)
        {
            c++;
        } else if (score >= 60 && score < 70)
        {
            d++;
        } else
        {
            e++;
        }
    }
    printf("%d %d %d %d %d", a, b, c, d, e);

    return 0;
} */

// 习题3-5 三角形判断
#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double one = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    double two = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    double three = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    double l, a;

    if (one + two > three && one + three > two && two + three > one)
    {
        l = one + two + three;
        double p = l / 2;
        a = sqrt(p * (p - one) * (p - two) * (p - three));
        printf("L = %.2f, A = %.2f", l ,a);
    } else
    {
        printf("Impossible");
    }
    
    return 0;
}