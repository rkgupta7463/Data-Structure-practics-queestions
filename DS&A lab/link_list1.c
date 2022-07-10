#include<stdio.h>
#include<stdlib.h>

struct node 
{
 int data;
 struct node *next;
}*head=NULL;

void create( )
{
 int d;
 printf("Enter a value for the node :");
 scanf("%d",&d);
 
 struct node *nnode =malloc(sizeof(struct node *));
 nnode->data = d; 
 if(head==NULL)
 {
  nnode->next =NULL;
  head = nnode;
 }
 else
 {
  nnode->next = head;
  head = nnode;
 }
}


void display( )
{
 struct node *t = head;
 
 while(t!=NULL)
 {
  printf("%d\t",t->data);
  t=t->next;
 }
 printf("\n");
}

void delete_at_begining( )
{
 struct node *t = head;
 head=head->next;
 free(t);
 
}
void delete_end(){
    struct node *temp,*pre;
    temp=head;
    pre=NULL;
    if (temp->next==NULL)
    {
        printf("Linked list is empty");
    }
    else{
        while (temp->next!=NULL)
        {
            pre=temp;
            temp=temp->next;
        }
        pre->next=NULL;
        free(temp);
    }
}
void insert_middle( )
{
 int loc=0, pos;
 int d;
 
 printf("Enter a value for the node :");
 scanf("%d",&d);
 printf("Enter the position to insert :");
 scanf("%d",&pos);
 
 struct node *nnode = (struct node *)malloc(sizeof(struct node *));
 nnode->data = d; 
 struct node *pre=NULL,*cur=head;
 
 while(loc<pos)
 {
  pre = cur;
  cur = cur->next;
  loc++; 
 }
 
 pre->next = nnode;
 nnode->next = cur;
 
}

int main( )
{
    
int ch;
while(1)
{
    printf("1.Create\n2.Insert at middle:\n3.Display\n4.delete_at_begining\n5.delete_at_end\nenter your choice:\n");

    scanf("%d",&ch);
    switch(ch)
    {
        case 1:create( );
        break;
        case 2:insert_middle( );
        break;
        case 3:display( );
        break; 
        case 4:delete_at_begining( );
        break; 
        case 5:delete_end();
        break; 
        case 0:exit(0);
        break;
        default:printf("Invalid\n");
        break;
    }


}
 return 0;
}
