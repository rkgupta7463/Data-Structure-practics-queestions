#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n, arr['n'], i, j, swap, min;
    printf("Enter ur array size:\n");
    scanf("%d", &n);

    printf("Enter ur elements to insert into arrays:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap = arr[i];
            arr[i] = arr[min];
            arr[min] = swap;
        }
    }

    printf("Select sorted is done\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}