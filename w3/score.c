#include <stdio.h>

int main()
{
    const int PASS = 60;
    int score;

    printf("Please enter your score: ");
    scanf("%d", &score);
    printf("Your score is %d.\n", score);
    if (score >= PASS)
        printf("Congratulations, you passed the examination.\n");
    else
        printf("Sorry, you don't pass the examination.");
    printf("Goodbye!");

    return 0;
}