#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    int count = 0;

    printf("the right num is %d\n", num);
    do
    {
        printf("Please enter your guess number(between 1 and 100): \n");
        scanf("%d", &guess);
        count++;
        if (guess > num) {
            printf("your guess number is bigger than the right number.\n");
        } else if (guess < num) {
            printf("your guess number is smaller than the right number.\n");
        }
    } while (guess != num);
    printf("The right number is %d, and your guess counts is %d.\n", num, count);

    return 0;
}