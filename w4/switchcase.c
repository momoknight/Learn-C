#include <stdio.h>

int main()
{
    int score;

    printf("Please enter your score: ");
    scanf("%d", &score);

    int type = score / 10;
    switch (type)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("Calm down.\n");
        break;
    }

    return 0;
}