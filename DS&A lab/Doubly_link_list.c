#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void create(int);
void deletebg();
void deleteend();
void deletepost(int);
void insertend(int);
void insertpost(int, int);
void traversal();
void traversalback();

struct node
{
    int ele;
    struct node *next;
    struct node *prv;
};

struct node *start = NULL;

void main()
{
    int ch, ele, pos;
    printf("1.create \n 2.insatend \n 3.insertion at position \n 4.delatbEg \n5.delatend \n6.deletion at position \n7.traversal\n 8. Reverse traversal\n 0. Exit!!\n");
    do
    {
        printf("\nEnter ur choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data value : \n");
            scanf("%d", &ele);
            create(ele);
            break;
        case 2:
            printf("Enter element to be inserted data in end: \n");
            scanf("%d", &ele);
            insatend(ele);
            break;
        case 3:
            printf("Enter element and position to be inserted\n");
            scanf("%d %d", &ele, &pos);
            insatpos(ele, pos);
            break;
        case 4:
            deletebg();
            break;
        case 5:
            deleteend();
            break;
        case 6:
            printf("Enter position to be deleted\n");
            scanf("%d", &pos);
            deletepost(pos);
            break;
        case 7:
            traversal();
            printf("\nElements Displayed\n");
            break;
        case 8:
            traversalback();
            printf("\nElements Displayed in privious node\n");
            break;
        case 0:
            printf("Exit!!!");
            exit;
        }
    } while (ch >= 0 && ch <= 8);
    getch();
}

void create(int ele)
{
    struct node *newnode, *temp;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->ele = ele;
    if (start == 0)
    {
        start = temp;
        start->prv = NULL;
        start->next = NULL;
    }
    else
    {
        temp->next = start;
        temp->prv = NULL;
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
        start->prv = NULL;
    }
    else
    {
        p = start;
        while (p->next != NULL)
            p = p->next;
        temp->prv = p;
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
            start->prv = NULL;
        }
        else
            printf("insertion is not possible at this position");
    }
    else if (start->next == NULL)
    {
        if (pos == 1)
        {
            temp->next = start;
            start->prv = temp;
            start = temp;
            start->prv = NULL;
        }
        else if (pos == 2)
        {
            start->next = temp;
            temp->prv = start;
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
                start->prv = temp;
                start = temp;
                start->prv = NULL;
            }
            else
            {
                p = start;
                for (int i = 1; i < pos - 1; i++)
                    p = p->next;
                temp->next = p->next;
                p->next->prv = temp;
                p->next = temp;
                temp->prv = p;
            }
        }
        else
            printf("insertion is not possible at this position");
    }
}

void deletebg()
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
        temp = start;
        start = start->next;
        start->prv = NULL;
        free(temp);
    }
}

void deleteend()
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

void deletepost(int pos)
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
    }
}

void traversalback()
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
