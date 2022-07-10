#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int lb, int mid, int ub)
{
    int i, j, k;

    int n1 = mid - lb + 1;
    int n2 = ub - mid;

    int LeftArray[n1], RightArray[n2];

    for (int i = 0; i < n1; i++)
        LeftArray[i] = arr[lb + i];
    for (int j = 0; j < n2; j++)
        RightArray[j] = arr[mid + 1 + j];

    i = 0;   /* initial index of first sub-array */
    j = 0;   /* initial index of second sub-array */
    k = lb; /* initial index of merged sub-array */

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            arr[k] = LeftArray[i];
            i++;
        }
        else
        {
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void main()
{
    int arr['n'], n, i;

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the elements of arrays:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergesort(arr, 0, n - 1);

    printf("Elements is sorted in merge sort manner:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}