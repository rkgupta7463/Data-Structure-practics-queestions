#include<stdio.h>
int main(){
    int n, arr['n'],s=0,avg=0;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s+=arr[i];
    }
    avg = s/n;
    printf("Average of given number: %d\n",avg);
    return 0;
}