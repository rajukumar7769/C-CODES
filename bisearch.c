#include <stdio.h>

int binarysearch(int arr[], int n, int item)
{
    int beg, mid, end;
    beg = 0;
    end = n;
    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (arr[mid] == item)
        {
            return mid;
        }
        if (arr[mid] < item)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 7, 9, 11};
    int item;
    printf("enter the item = ");
    scanf("%d", &item);
    int n = sizeof(a) / sizeof(a[0]);
    int result = binarysearch(a, n, item);

    if (result == -1)
    {
        printf("not found ");
    }
    else
    {
        printf("%d th position", result + 1);
    }

    return 0;
}