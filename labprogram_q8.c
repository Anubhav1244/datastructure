#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *llink;
    struct node *rlink;

};
typedef struct node* NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc (sizeof(struct node));
    if (x==NULL)
    {
        printf("somethong went wrong");
        exit(0);
    }
    return x;
    
}
NODE bst_insert(NODE root,int ele)
{
    NODE temp;
    temp=getnode();
    temp->info=ele;
    temp->llink=temp->rlink=NULL;
    if(root==NULL)
    {
        return temp;
    }
    if(ele<root->info)
    {
        root->llink=bst_insert(root->llink,ele);
    }
    else if(ele>root->info)
    {
        root->rlink=bst_insert(root->rlink,ele);
    }
    return root;
}
void inorder(NODE root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->llink);
    
    printf("%d",root->info);
    printf("-->");
    inorder(root->rlink);
}
int main()
{
    NODE root;
    root=NULL;
    root=bst_insert(root,5);
    root=bst_insert(root,4);
    root=bst_insert(root,7);
    root=bst_insert(root,9);
    inorder(root);
    
}