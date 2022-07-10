#include <stdio.h>
#include <stdlib.h>

struct Btree
{
    int data;
    struct Btree *left, *right;
};

struct Btree *create()
{
    struct Btree *newnode=malloc(sizeof(struct Btree));
    int ele;
    printf("Enter the data (-1 for no node):-\n");
    scanf("%d", &ele);

    if (ele == -1)
    {
        return 0;
    }

    newnode->data=ele;
    printf("\nEnter the left child data %d \n", ele);
    newnode->left = create();

    printf("\nEnter the right child data %d \n", ele);
    newnode->right = create();

    return (newnode);
}

void preorder(struct Btree* root)
{
    if (root == NULL)
        return;
     
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct Btree* root)
{
    if (root == NULL)
        return;
 
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void postorder(struct Btree* root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

void BDisplay(struct Btree* root)
{
    if (root == NULL)
        return;

    if (root > root->data)
    {
        postorder(root->left);
        printf("%d ", root->data);
        postorder(root->right);
    }
    
}

void main()
{
    struct Btree *root;
    root = 0;
    int ch;

    do
    {
        printf("\n\n1.Crerte tree or enter data\nDsiplay Menu:-\n\t\t2.Preorder display\n\t\t3.Postorder dsiplay\n\t\t4.Inorder display\n5.BTree display\n\n");
        printf("Enter ur choice:-\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            root = create();
            break;

        case 2:
            printf("\nTravseral Preordre is:-\n");
            preorder(root);
            break;

        case 4:
            printf("\nTravseral Inorder is:-\n");
            inorder(root);
            break;

        case 3:
            printf("\nTravseral Postordre is:-\n");
            postorder(root);
            break;
        
        case 5:
            printf("\nBinary tree travseral :-\n");
            BDisplay(root);
            break;

        case 0:
            printf("EXIT!!");
            exit(0);
            break;

        default: printf("Invalid options\n");
            break;
        }
    } while (ch >= 0 && ch <= 4);
}


