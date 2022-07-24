#include<stdio.h>
#include<stdlib.h>

void main(){
    int arr['n'],n,temp,i,j;
    printf("Size of array\t");
    scanf("%d",&n);
    printf("Elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        temp = arr[i];
        j=i-1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }  
        arr[j+1]=temp;
    }

       printf("Array is sorted:\n");
        for (i = 0; i <n; i++)
        {
            printf("%d\t ",arr[i]);
        }
}