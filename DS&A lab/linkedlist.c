#include <stdio.h>
#include <Stdlib.h>

struct newnode
{
    int data;
    struct newnode *next;
};

struct newnode *head = NULL;

void insert()
{
    struct newnode *temp = malloc(sizeof(struct newnode));
    int data;

    printf("Enter data in linked list\n");
    scanf("%d", &data);

    temp->data = data;
    if (temp == NULL)
    {
        temp->next = NULL;
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void delete_beg()
{
    struct newnode *d=head;

    if (d==NULL)
    {
        printf("Linked list is empty");
    }
    else{
        head=head->next;
    }
    free(d);
}

void delete_at_end(){
    struct newnode *cu=head;
    struct newnode *pv=NULL;
    while (cu->next!=NULL)
    {
        pv=cu;
        cu=cu->next;
    }
    pv->next=NULL;
    free(cu);
}

void display()
{
    struct newnode *t = head;

    while (t != NULL)
    {
        printf("%d\t", t->data);
        t = t->next;
    }
    printf("\n");
}

int main()
{
    int ch, data;
    do
    {
        printf("\n1. Insert data\n2. Delete at Beg\n3. Display\n");
        printf("Choose ur opotion\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        
        case 2:
            delete_beg();
            break;
        case 3:
             delete_at_end();
            break;

        case 4:
            display();
            break;

        case 0:
            exit(0);
            break;

        default:
            printf("Invalid option");
            break;
        }
    } while (ch >= 0 && ch <= 4);
    return 0;
}
