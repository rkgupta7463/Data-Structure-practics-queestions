#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a['n'], i, n, search;
    printf("Enter no of elements\n");
    scanf("%d", &n);

    printf("Enter ur elements in  array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number which u want to search\n");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (search == a[i])
        {
            printf("%d this data is founded and position of that value is %d", search,i+1);
            break;
        }else{
            printf("%d this data is not founded", search);
            break;
        }
    }
}