#include<stdio.h>
int main(){
    int arr[5],n,s=0;
    printf("Enter fivenumber :\n");
    for (int i = 0; i < 5; i++)
    {
       scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        s+=arr[i];
    }
    printf("Sum: %d\n",s);
    return 0;
}