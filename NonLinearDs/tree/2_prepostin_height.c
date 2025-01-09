#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* left;
    int data;
    struct node* right;
};

struct node* Build_tree();
struct node* create_node(int);
void display(struct node*);
void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);
int height(struct node*);
int max(int,int );

void main()
{
    struct node* root = NULL;
    root = Build_tree();
    display(root);
    printf("\n");
    printf("Preorder traversal:");
    preorder(root);
    printf("\n");
    printf("inorder traversal:\n");
    inorder(root);
    printf("\n");
    printf("postorder traversal:\n");
    postorder(root);
    printf("\n");
    printf("height of tree = %d", height(root));
    printf("\n");
}

struct node* Build_tree()
{
    int data;
    struct node* root = NULL;
    printf("Enter Data: ");
    scanf("%d", &data);
    if (data == -1)
    {
        return NULL;
    }
    root = create_node(data);
    printf("Enter Data in left of %d node: ", data);
    root->left = Build_tree();
    printf("Enter Data in right of %d node: ", data);
    root->right = Build_tree();

    return root;
}
struct node* create_node(int data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Error in memory Allocation.");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->left = new_node->right = NULL;

    return new_node;
}

void display(struct node* root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d=>", root->data);
    display(root->left);
    display(root->right);
}

void preorder(struct node* root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node* root)
{
    if (root == NULL)
    {
        return;
     }
    else
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}

void postorder(struct node* root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}

int height(struct node* root)
{
    int lh, rh;

    if (root == NULL)
    {
        return 0;
    }
    else
    {
        lh = height(root->left);
        rh = height(root->right);
        return max(lh, rh) + 1;
    }

}
int max(int lh, int rh)
{
    return lh>rh?lh:rh;
}