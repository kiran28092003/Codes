#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* left;
    int data;
    struct node* right;
};

struct QueueNode
{
    struct node* Nodedata;
    struct QueueNode* next;
};

struct Queue
{
    struct QueueNode* front;
    struct QueueNode* rear;
};


struct node* Build_tree();
struct node* create_node(int);
void display(struct node*);
void level_order_traversal(struct node*);
struct Queue* create_queue();
void enqueue(struct Queue*, struct node*);
int is_empty(struct Queue*);
struct node* dequeue(struct Queue*);

void main()
{
    struct node* root = NULL;
    root = Build_tree();
    display(root);
    printf("Level Order Traversal:\n");
    level_order_traversal(root);
    
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


void level_order_traversal(struct node* root)
{
    if (root == NULL)
        return;

    struct Queue* queue = NULL;
    queue=create_queue();
    enqueue(queue, root);

    while (!is_empty(queue))
    {
        struct node* tempdata = dequeue(queue);
        printf("%d ", tempdata->data);

        if (tempdata->left != NULL)
        {
            enqueue(queue, tempdata->left);
        }
        if (tempdata->right != NULL)
        {
            enqueue(queue, tempdata->right);
        }
    }
}

struct Queue* create_queue()
{
    struct Queue* queue = NULL;
    queue=(struct Queue*)malloc(sizeof(struct Queue));
    if (queue == NULL)
    {
        printf("Error in memory allocation");
        exit(EXIT_FAILURE);
    }
    queue->front = queue->rear = NULL;
    return queue;
}


void enqueue(struct Queue* queue, struct node* root)
{
    struct QueueNode* qnode = NULL;
    qnode=(struct QueueNode*)malloc(sizeof(struct QueueNode));
    if (qnode == NULL)
    {
        printf("Error in memory allocation");
        exit(EXIT_FAILURE);
    }
    qnode->Nodedata = root;
    qnode->next = NULL;
    if (queue->rear == NULL)
    {
        queue->front = queue->rear = qnode;
    }
    else
    {
        queue->rear->next = qnode;
        queue->rear = qnode;
    }
}


int is_empty(struct Queue* queue)
{
    return queue->front == NULL;
}
struct node* dequeue(struct Queue* queue)
{
    if (is_empty(queue))
    {
        return NULL;
    }
    struct node* tempdata = NULL;
    tempdata=queue->front->Nodedata;
    struct QueueNode* tempnode = NULL;
    tempnode=queue->front;
    queue->front = queue->front->next;
    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }
    free(tempnode);
    return tempdata;
}