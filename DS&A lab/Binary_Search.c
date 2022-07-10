#include<stdio.h>
#include<stdlib.h>

int b_search(int a[],int n , int search1);

void main(){
    int n, a['n'],search1,pos;

    printf("Size of array:\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    printf("Assending order:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
    printf("\nEnter elements to be searched\n");
    scanf("%d",&search1);
    pos=b_search(a,n,search1);
    if (pos!=-1)
    {
    printf("Elements %d is founded at %d position",search1,pos+1);   
    }
    else{
        printf("Elements is not founded!!");
    }
}

int b_search(int a[],int n,int search1){
    int low, high,mid;

    low=0; high =n-1;

    while (low<=high){
         mid=(low+high)/2;
        if(search1==a[mid])
        {
            return mid;
            break;
        }
        else if(search1<a[mid])
        {
            high=mid-1;
        }
        else
        {
        low=mid+1;
        }
    }
    // if(low>high)
    // {
    //     return(-1);
    // }
}