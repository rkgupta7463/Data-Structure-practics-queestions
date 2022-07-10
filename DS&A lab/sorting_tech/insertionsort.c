#include<stdio.h>
#include<stdlib.h>

void main(){
    int a['n'],n,i,j,temp;

    printf("Size of array:\n");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for (i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i <n; i++)
    {
        temp = a[i];
        j=i-1;
        while (j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j=j-1;
        }  
        a[j+1]=temp;
    }
    printf("Array is sorted:\n");
        for (i = 0; i <n; i++)
        {
            printf("%d\t ",a[i]);
        }
         
}