#include <stdio.h>
#include <stdlib.h>

void quicksort(int arr[], int start, int end)
{
    int i, j, pivot, temp;

    pivot = start;
    i = start;
    j = end;

    if (start < end)
    {
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && end)
                i++;
            while (arr[j] > arr[pivot])
                j--;

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;

        quicksort(arr, start, j - 1);
        quicksort(arr, j + 1, end);
    }
}

void main()
{
    int i, n, arr['n'];

    printf("Enter the size of arrays:\n");
    scanf("%d", &n);

    printf("Enter ur elements for arrays:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printf("Arrays are sorted:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}