#include<stdio.h>
#include<stdlib.h>

void main(){
   int arr['n'],n,i,j,temp;
    
    printf("Size of array:\n");
    scanf("%d",&n);
    
    printf("Enter the elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);    
    }
    
    printf("This is given array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);    
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    printf("\nSwapping with only two number:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);    
    }
}
