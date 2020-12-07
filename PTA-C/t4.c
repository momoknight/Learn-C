// 练习4-3 求给定精度的简单交错序列部分和
/* #include <stdio.h>
#include <math.h>

int main()
{
    double eps;
    int i = 0;
    double n = 1.0;
    int flag = 1;
    double sum = 0.0;

    scanf("%lf", &eps);
    while (n > eps)
    {
        sum += flag * n;
        flag = -flag;
        i++;
        n = 1.0 / (1 + 3 * i);
    }
    sum += flag * n;
    printf("sum = %f", sum);
    
    return 0;
} */

// 练习4-6 猜数字游戏
/* #include <stdio.h>

int main()
{
    int answer, max;
    scanf("%d %d", &answer, &max);
    int cnt = 0;
    int guess;
    if (cnt <= max)
    {
        do
        {
            scanf("%d", &guess);
            if (guess < 0)
            {
                printf("Game Over\n");
                goto out;
            }
            
            if (guess > answer)
            {
                printf("Too big\n");
            }
            else if (guess < answer)
            {
                printf("Too small\n");
            }
            cnt++;
        } while (guess != answer);
    }

    if (cnt > max)
    {
        printf("Game Over");
    } else if (cnt > 3 && cnt <= max)
    {
        printf("Good Guess!");
    } else if (cnt <= 3 && cnt > 1)
    {
        printf("Lucky You!");
    } else if (cnt == 1)
    {
        printf("Bingo!");
    }
    
    out:
    return 0;
} */

// 练习4-7 求e的近似值
/* #include <stdio.h>

double factorial(int n);

int main()
{
    int n;
    double sum = 1.0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1 / factorial(i);
    }
    printf("%.8f", sum);

    return 0;
}

double factorial(int n)
{
    double fact = 1;

    for (double i = 1.0; i <= n; i++)
    {
        fact = fact * i;
    }
    
    return fact;
} */

// 练习4-10 找出最小值
/* #include <stdio.h>

int main()
{
    int cnt;
    scanf("%d", &cnt);

    int n;
    scanf("%d", &n);
    int min = n;
    for (int i = 1; i < cnt; i++)
    {
        scanf("%d", &n);
        if (n < min)
        {
            min = n;
        }
    }
    
    printf("min = %d", min);

    return 0;
} */

// 练习4-11 统计素数并求和
/* #include <stdio.h>

int isPrime(int n);

int main()
{
    int m, n;
    int cnt = 0;
    int sum = 0;

    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i)) {
            cnt++;
            sum += i;
        }
    }
    printf("%d %d", cnt, sum);

    return 0;
}

int isPrime(int n)
{
    int isprime = 1;
    // 1不是素数
    if (n == 1)
    {
        isprime = 0;
    }
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }

    return isprime;
} */

// 习题4-1 求奇数和
/* #include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);

    while (n != 0 && n >= 0)
    {
        if (n % 2 != 0)
        {
            sum += n;
        }
        scanf("%d", &n);
    }

    printf("%d", sum);
    
    return 0;
} */

// 习题4-2 求幂级数展开的部分和
// x取5时结果不对
/* #include <stdio.h>
#include <math.h>

double factorial(int n);

int main()
{
    double x;
    int k = 1;
    double sum = 1.0;
    scanf("%lf", &x);
    double item = pow(x, k) / factorial(k);

    while (item >= 0.00001)
    {
        sum += item;
        k++;
        item = pow(x, k) / factorial(k); 
    }
    
    printf("%.4f", sum);

    return 0;
}

double factorial(int n)
{
    double fact = 1.0;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
} */
