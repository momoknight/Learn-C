#include <stdio.h>

int main()
{
    int n, length;
    int cnt = 0;
    double sum = 0.0;

    printf("Please enter an integer number(the length of the array): ");
    scanf("%d", &length);
    scanf("%d", &n);
    int number[length];

    while (n != -1)
    {
        number[cnt] = n;
        sum += n;
        cnt++;
        if (cnt <= length) {
            scanf("%d", &n);
        }    
    }
    
    if (cnt > 0)
    {
        double average = sum / cnt;
        for (int i = 0; i < cnt; i++)
        {
            if (number[i] > average)
            {
                printf("%d ", number[i]);
            }
        }
    }
    
    return 0;
}