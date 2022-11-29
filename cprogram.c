#include <stdio.h>
#define size 10
int q[size];
int f = -1, r = -1;
void enq();
void deq();
void display();
void max();
int main()
{
    int ch;
    while (1)
    {
        printf("----1.enq()\n2.deq()\n3.display()\n 4.Maximum\n----");
        printf("\nenter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enq();
            break;
        case 2:
            deq();
            break;
        case 3:
            display();
            break;

        case 4:
            max();
            break;

        case 0:
            exit(0);
            break;
        default:
            printf("\nEnter valid choice\t\n");
        }
    }
    display();

    return 0;
}
void enq()
{
    int value;
    printf("enter value to insert:\t");
    scanf("%d", &value);
    if (r == size)
        printf("queue is overflow");
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        q[r] = value;
    }
    else
    {

        r = r + 1;
        q[r] = value;
    }
}
void deq()
{
    if (f == size)
        printf("q is empty");
    else
    {
        printf("delete value=%d", q[f]);
        f = f + 1;
    }
}

void display()
{
    int i;
    for (i = f; i <= r; i++)
    {
        printf("-->%d", q[i]);
    }
}

void max()
{
    int i, s, j;
    for (i = f; i <= r; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (i < j)
            {
                s = q[i];
            }
            else
            {
                s = q[j];
            }
        }
    }
    printf("Maximum Vale from the Queue :- %d", s);
}