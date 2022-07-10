#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, n, a['n'];

    printf("Enter the value\n");
    scanf("%d", &n);

    printf("Enter th elements in arrays: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Increment order : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }


    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nDecrements order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}