#include <stdio.h>

int main()
{
    const int number = 10; // C99:数组的大小
    int n;
    int count[10];
    for (int i = 0; i < number; i++)
    {
        count[i] = 0;
    }

    printf("Please enter an integer number(0-9)(-1 means end): ");
    scanf("%d", &n);
    while (n != -1)
    {
        if (n >= 0 && n <=9)
        {
            count[n] = count[n] + 1;
        }
        scanf("%d", &n);
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("%d: %d\n", i, count[i]);
    }
    
    return 0;
}