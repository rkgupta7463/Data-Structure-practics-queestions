#include <stdio.h>
#include <stdlib.h>

void enqueue(int);
void dequeue();
void show();

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void main()
{
    int ch, item;

    do
    {
        printf("Queue Menu:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Show\n4. Exit!!\n");
        printf("Enter ur choices\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Insert data into queue\n");
            scanf("%d", &item);
            enqueue(item);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            show();
            break;

        case 4:
            printf("Exit!!!");
            exit(0);
            break;

        default:
            printf("Invalid choioce!!!");
            break;
        }
    } while (ch >= 1 && ch <= 4);
}

void enqueue(int value)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;

    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
        front->next = rear->next = NULL;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        rear->next = NULL;
    }
}

void dequeue()
{
    struct node *d;
    d = (struct node*)malloc(sizeof(struct node));
    if (rear == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Delete from queue\n");
        d = front;
        front = front->next;
        free(d);
    }
}

void show()
{
    struct node *p;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is already empty\n");
    }
    else
    {
        p = front;
        while (p != NULL)
        {
            printf("%d\t", p->data);
            p = p->next;
            /* code */
        }
        printf("\nDisplayed queues\n");
    }
}