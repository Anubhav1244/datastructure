#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *llink;
    struct  node *rlink;
    int info;

};
typedef struct node* NODE;
NODE getnode()
{
    NODE x;
    x=(NODE) malloc (sizeof(struct node));
    if(x==NULL)
    {
        printf("something went wrong");
        exit(0);

    }
    return x;
}
void preorder(NODE root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d->",root->info);
    preorder(root->llink);
    preorder(root->rlink);
}
NODE create()
{
    NODE temp;
    temp=getnode();
    int num;
    printf("enter the data for root node\n");
    scanf("%d",&num);
    if(num==-1)
    {
        return NULL;
    }
    temp->info=num;
    printf("enter the data for left child of %d\n",num);
    temp->llink=create();
    printf("enter tthe data for right child of %d\n",num);
    temp->rlink=create();
    return temp;
    


}
int main()
{
    NODE root;
    root=create();
    preorder(root);
}
