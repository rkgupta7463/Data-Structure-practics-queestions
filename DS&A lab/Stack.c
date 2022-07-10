#define max 10
#include <stdio.h>
#include <conio.h>

void push(int);
void pop();
void peek();
void display();
int stack[max], top = -1;

void main()
{
    int ele, ch;
    printf("\n 1 for Push data \n 2 for pop data \n 3 for peek data \n 4 for Display the data\n");
    do
    {
        printf("\nEnter ur choice: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Insert the data value : \n");
            scanf("%d", &ele);
            push(ele);
            break;

        case 2:
            pop();
            if (ele != -1)
                printf("Deleted element is %d\n", ele);
            break;

        case 3:
            printf("Returning data from stack, but not remove the data from stack: \n");
            peek();
            break;

        case 4:
            printf("\n====\n");
            display();
            break;

        case 0:
            printf("Exit!!!");
            break;
        }
    } while (ch >= 0 && ch <= 4);
}
void push(int ele)
{
    if (top >= max - 1)
    {
        printf("Stack is empty");
    }
    else
    {
        top++;
        stack[top] = ele;
    }
}

void pop()
{
    int ele;
    if (top >= max - 1)
    {
        printf("Stack is empty");
    }
    else
    {
        ele = stack[top];
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty"); /* code */
    }
    else
    {
        printf("%d", stack[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("____\n");
            printf("|%d|\n", stack[i]);
        }
        printf("____\n");
        printf("\nData is displayed\n");
    }
}
