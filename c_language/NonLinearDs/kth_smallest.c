k=5;
printf("%dth smallest element is %d");
int kth_smallest_element(struct node* root,int* k)
{
    int leftans=0,rightans=0;
    if(root==NULL)
    {
        return 0;
    }
    if(leftans!=0)
    {
        return root->data;
    }
    rightans=kth_smallest-element(root->right,k);
    return rightans;

}

