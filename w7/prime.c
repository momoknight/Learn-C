#include <stdio.h>

// 判断x是否被小于x的平方根数整除，循环x的平方根次
/* #include <math.h>

int Prime(int x);

int main()
{
    int count = 0;
    int i = 1;
    while (count < 100)
    {
        if (Prime(i))
        {
            printf("%d ", i);
            if ((count + 1) % 5)
            {
                printf("\t");
            }
            else
            {
                printf("\n");
            }
            count++;
        }
                
        i++;
    }
    
    return 0;
}

int Prime(int x)
{
    int ret = 1;
    if (x == 1 || (x % 2 == 0 && x != 2))
    {
        ret = 0;
    }
    for (int i = 3; i < sqrt(x); i+=2)
    {
        if (x % i == 0)
        {
            ret = 0;
            break;
        }
    }
    
    return ret;
} */

// 构造素数表：通过判断x是否能被比x小的素数整除
/* int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);

int main(void)
{
    int prime[100] = {2};
    int count = 1;
    int i = 3;
    while (count < 100)
    {
        if (isPrime(i, prime, count))
        {
            prime[count++] = i;
        }
        i++;
    }
    
    for (i = 0; i < 100; i++)
    {
        printf("%d", prime[i]);
        if ((i + 1) % 5)
        {
            printf("\t");
        } else
        {
            printf("\n");
        }        
    }
    
    return 0;
}

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)
{
    int ret = 1;
    for (int i = 0; i < numberOfKnownPrimes; i++)
    {
        if (x % knownPrimes[i] == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
} */

// 构造素数表，标记非素数，留下的就是素数
int main()
{
    const int maxNumber = 100;
    int isPrime[maxNumber];
    int i;
    int x;
    for (i = 0; i < maxNumber; i++)
    {
        isPrime[i] = 1;
    }
    for (x = 2; x < maxNumber; x++)
    {
        if (isPrime[x])
        {
            for ( i = 2; i * x < maxNumber; i++)
            {
                isPrime[i * x] = 0;
            }
        }
    }
    for (i = 2; i < maxNumber; i++)
    {
        if (isPrime[i])
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}