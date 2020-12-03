#include <stdio.h>

int main()
{
    int n, sum = 0, count = 0;

    printf("Please enter an integer number: ");
    scanf("%d", &n);
    while (n != -1)
    {
        sum += n;
        count++;
        printf("Please enter an integer number: ");
        scanf("%d", &n);
    }
    
    printf("The average is %f\n.", 1.0 * sum / count);

    return 0;
}