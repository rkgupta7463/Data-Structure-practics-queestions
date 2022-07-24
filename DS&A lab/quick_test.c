#include <stdio.h>

// int quick(int a[] , int start, int end);

int quick(int a[], int start, int end)
{
    int temp, p, i, j;
    p = start;
    i = start;
    j = end;
    if (start < end)
    {
        while (i < j)
        {
            while (a[i] <= a[p] && end)
                i++;
            while (a[j] > a[p])
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[p];
        a[p] = a[j];
        a[j] = temp;

        quick(a, start, j - 1);
        quick(a, j + 1, end);
    }
    return 0;
}

int main()
{
    int a['n'], n, i;
    printf("Size of array:\n");
    scanf("%d", &n);

    printf("Insert data : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    quick(a, 0, n - 1);
    printf("Array is sorted order :-\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}