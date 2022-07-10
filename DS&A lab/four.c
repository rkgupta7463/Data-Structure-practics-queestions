#include<stdio.h>
#include<stdlib.h>

struct node
{
    int roll_no;
    int weigth,heigh;
};
void main(){
    int n;
    printf("Enter the number of memory\n");
    scanf("%d",&n);
    struct node *ptr;
    int hei=0,wei=0;
    ptr=(struct node*) malloc(n*sizeof(struct node));

    if(ptr == NULL){
        printf("Memory not allocate\n");
    }
    else{
        for (int i = 0; i < n; i++)
        {
            printf("Enter student Roll No \n");
            scanf("%d",&ptr->roll_no);
            printf("Enter student weight \n");
            scanf("%d",&ptr->weigth);
            printf("Enter student height \n");
            scanf("%d",&ptr->heigh);
            system("cls");
        }
        for (int i = 0; i < n; i++)
        {
            hei = hei+(ptr->heigh);
            wei = wei+(ptr->weigth);
        }
    }
    printf("The Average height :- %d\n",(hei/n));
    printf("The Average weight:- %d\n ",(wei/n));
}