#include<stdio.h>
#include<stdlib.h>


struct node
{
    int info;
    struct node* rlink;
    struct node* llink;
};
typedef struct node* NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("MEMORY NOT AVAILABLE\n");
        exit(0);

    }
    return x;
}
NODE insert_front(NODE first,int elem)
{

    NODE temp;
    temp=getnode();
    temp->info=elem;
    temp->rlink=temp->llink=NULL;
    if(first==NULL)
    {

        return temp;
    }
    temp->rlink=first;
    first->llink=temp;
    return temp;

}
void display(NODE first)
{

    if(first==NULL)
    {

        printf("the dll is empty\n");
        return;
    }
    NODE cur;
    cur=first;
    while(cur!=NULL)
    {

        printf("%d\t",cur->info);
        cur=cur->rlink;
    }
    printf("\n");
}
NODE insert_rear(NODE first,int item)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->llink=temp->rlink=NULL;
    if(first==NULL)
    {
        return temp;

    }
    NODE curr;
    curr=first;
    while(curr->rlink!=NULL)
    {
        curr=curr->rlink;

    }
    curr->rlink=temp;
    temp->llink=curr;
    return first;
}
int main()
{

    NODE first=NULL;
    first=insert_front(first,22);
    display(first);
    first=insert_front(first,33);
    display(first);
    first=insert_rear(first,57);
    
    display(first);
}