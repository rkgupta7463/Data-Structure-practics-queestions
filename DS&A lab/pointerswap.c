#include<stdio.h>
#include<stdlib.h>

void main(){
    int n1,n2,temp;
    printf("Enter the two number\n");
    scanf("%d%d",&n1,&n2);

    int *ptrn1 , ptrn2;
    ptrn1 = n1; ptrn2=n2;
    printf("Before swapping n1 and n2 : %d && %d\n",ptrn1,ptrn2);
        temp = ptrn1;
        ptrn1 = ptrn2;
        ptrn2 = temp;
    printf("After swapping n1 and n2 : %d && %d",n1,n2);
}