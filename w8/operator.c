#include <stdio.h>

void f(int *p);
int max(int *arr, int len);

int main()
{
    int a;
    a = 6;
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(double)=%ld\n", sizeof(double));
    printf("sizeof(a)=%ld\n", sizeof(a));
    printf("0x%x\n", &a);

    int i = 0;
    /* int p;
    p = (int)&i;
    printf("0x%x\n", p);
    printf("%p\n", &i);
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(&i));

    int n = 6;
    printf("&n=%p\n", &n);
    f(&n);
    printf("n=%d\n", n); */

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("main sizeof(arr)=%lu\n", sizeof(arr));
    printf("main arr=%p\n", arr);
    max(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}

int max(int *arr, int len)
{
    printf("max sizeof(arr)=%lu\n", sizeof(arr));
    printf("max arr=%p\n", arr);

}

void f(int *p)
{
    printf(" p=%p\n", p);
    printf("*p=%d\n", *p);
    *p = 10;
}