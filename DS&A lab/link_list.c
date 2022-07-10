#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void create(int);
void insatend(int);
void insatpos(int, int);
void delatbeg();
void delatend();
void delatpos(int);
void traversal();
void rev();

struct node
{
    int ele;
    struct node *next;
};

struct node *start = NULL;
void main()
{
    int ch, ele, pos;
    printf("\n 1.create \n 2.insatend \n 3.insertion at position \n 4.delatbEg \n 5.delatend \n 6.deletion at position \n 7.traversal\n 8. Reverse traversal\n 0. Exit!!\n");
    do
    {
        printf("\nEnter ur choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element to be inserted\n");
            scanf("%d", &ele);
            create(ele);
            break;
        case 2:
            printf("Enter element to be inserted\n");
            scanf("%d", &ele);
            insatend(ele);
            break;
        case 3:
            printf("Enter element and position to be inserted\n");
            scanf("%d %d", &ele, &pos);
            insatpos(ele, pos);
            break;
        case 4:
            delatbeg();
            break;
        case 5:
            delatend();
            break;
        case 6:
            printf("Enter position to be deleted\n");
            scanf("%d", &pos);
            delatpos(pos);
            break;
        case 7:
            traversal();
            break;
        case 8:
            rev();
            printf("\nReverse the structrue elements!!\n");
            break;
        case 0:
            printf("Exit!!!");
            exit(0);
            break;
        }
    } while (ch >= 0 && ch <= 7);
    getch();
}

void create(int ele)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->ele = ele;
    if (start == NULL)
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}
void insatend(int ele)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->ele = ele;
    if (start == NULL)
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        p = start;
        while (p->next != NULL)
            p = p->next;
        p->next = temp;
        temp->next = NULL;
    }
}
void insatpos(int ele, int pos)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->ele = ele;


    if (start == NULL)
    {
        if (pos == 1)
        {
            start = temp;
            start->next = NULL;
        }
        else
            printf("insertion is not possible at this position");
    }
    else if (start->next == NULL)
    {
        if (pos == 1)
        {
            temp->next = start;
            start->next = NULL;
            start = temp;
        }
        else if (pos == 2)
        {
            start->next = temp;
            temp->next = NULL;
        }
        else
            printf("insertion is not possible at this position");
    }
    else
    {
        int count = 0;

        struct node *p;
        p = start;
        while (p != NULL)
        {
            p = p->next;
            count++;
        }
        printf("%d number of elements are already exits in our struct node!!! \n", count);
        if (pos <= count + 1)
        {
            if (pos == 1)
            {
                temp->next = start;
                start = temp;
            }
            else
            {
                p = start;
                for (int i = 1; i < pos - 1; i++)
                    p = p->next;
                temp->next = p->next;
                p->next = temp;
            }
        }
        else
            printf("insertion is not possible at this position");
    }
}
void delatbeg()
{
    struct node *temp;
    if (start == NULL)
        printf("list is empty");
    // else if (start->next == NULL)
    // {
    //     temp = start;
    //     start = NULL;
    //     // free(temp);
    //     // free(temp);
    // }
    else
    {
        temp = start;
        start = start->next;
        // free(temp);
    }
}
void delatend()
{
    struct node *temp;
    if (start == NULL)
        printf("list is empty");
    else if (start->next == NULL)
    {
        temp = start;
        start = NULL;
        free(temp);
    }
    else
    {
        struct node *p;
        p = start;
        while (p->next->next != NULL)
            p = p->next;
        temp = p->next;
        p->next = NULL;
        free(temp);
    }
}
void delatpos(int pos)
{
    struct node *temp, *p;
    int count = 1;
    p = start;
    if (p == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (count < pos - 1)
        {
            p = p->next;
            count++;
        }
        temp = p->next;
        p->next = temp->next;
        free(temp);
    }
}
void traversal()
{
    struct node *p;
    if (start == NULL)
        printf("list is empty");
    else
    {
        p = start;
        while (p != NULL)
        {
            printf("%d\t", p->ele);
            p = p->next;
        }
        printf("\nElements Displayed\n");
    }
}

void rev()
{
    struct node *prevnode, *currentnode, *nextnode, *p;
    prevnode = 0;
    currentnode = nextnode = start;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    start = prevnode;
    if (start != NULL)
    {
        printf("After reverse the list is :\n");
        while (start->next != NULL)
        {
            printf("%d\t", start->ele);
            start = start->next;
        }
        printf("%d \t", start->ele);
    }
    else
    {
        printf("List is empty. Please insert some data in list \n");
    }
}