#include <stdio.h>

int binarySearch(int k, int a[], int length);

int main()
{
    int a[] = {1, 2, 3, 5, 6, 7, 8, 10, 12, 15, 20};
    int length = sizeof(a) / sizeof(a[0]);
    printf("Please enter an integer number that you want to search: ");
    int n;
    scanf("%d", &n);

    int loc = binarySearch(n, a, length);
    if (loc != -1)
    {
        printf("%d is in the %d of the array a", n, loc);
    } else
    {
        printf("%d isn't in the array a", n);
    }
    
    return 0;
}

int binarySearch(int k, int a[], int length)
{
    int ret = -1;
    int left = 0;
    int right = length - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (k < a[mid])
        {
            right = mid - 1;
        } else if (k > a[mid])
        {
            left = mid + 1;
        } else
        {
            ret = mid;
            break;
        }
    }
    
    return ret;
}