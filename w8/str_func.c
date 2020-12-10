#include <stdio.h>
#include <string.h>

int main()
{
    char line[] = "Hello";
    printf("strlen=%lu\n", strlen(line));
    printf("sizeof=%lu\n", sizeof(line));

    char s1[] = "abc";
    char s2[] = "Abc";
    printf("%d\n", strcmp(s1, s2));

    char s[] = "hello";
    char *p = strchr(s, 'l');
    printf("%s\n", p);
    // 如何找第二个l
    p = strchr(p+1, 'l');
    printf("%s\n", p);
    // 如何输出*p前面的字符串
    char c = *p;
    *p = '\0';
    char *t = (char*)malloc(strlen(s)+1);
    strcpy(t, s);
    printf("%s\n", t);
    *p = c;
    printf("%s\n", p);
    free(t);

    return 0;
}