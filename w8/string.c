#include <stdio.h>

int main()
{
    int i = 0;
    char *s = "Hello World";
    char *s2 = "Hello World";
    char s3[] = "Hello World";
    s3[0] = 'B';

    printf("&i=%p\n", &i);
    // s和s2指向的"Hello World"常量存放在只读不可写的地方。
    printf("s =%p\n", s);
    printf("s2=%p\n", s2);
    printf("s3=%p\n", s3);
    printf("here!s3[0]=%c\n", s3[0]);

    char word[8];
    char word2[8];
    scanf("%s", word);
    scanf("%s", word2);
    printf("%s##\n", word);
    printf("%s##%s##\n", word, word2);

    return 0;
}