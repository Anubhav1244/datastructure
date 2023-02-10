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
NODE delete_front(NODE first)
{
    NODE next;
    if (first==NULL)
    {
        printf("no element in the dll");
        return NULL;
    }
    next=first->rlink;
    if (next==NULL)
    {
        printf("delted item is %d\n",first->info);
        return next;
    }
    next->llink=NULL;
    printf("delted item is %d\n",first->info);
    free(first);
    return next;
    
}
NODE delete_rear(NODE first)
{
    NODE curr,prev;
    if(first==NULL)
    {
        printf("no element in the dll\n");
        return NULL;
    }
    curr=first;
    prev=NULL;
    while (curr->rlink!=NULL)
    {
        prev=curr;
        curr=curr->rlink;
    }
    printf("delted item is %d\n",curr->info);
    (curr->llink)->rlink=NULL;
    free(curr);
    return first;

    
}
int main()
{

    NODE first;
    first=NULL;
    int ch,ele;
    while (1)
    {
        printf("\n1.insert_front,2.insert_rear,3.delte_front,4.delte_rear,5.display,6.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: printf("enter the element\n");
                scanf("%d",&ele);
                first=insert_front(first,ele);
                break;
        case 2: printf("enter the element\n");
                scanf("%d",&ele);
                first=insert_rear(first,ele);
                break;
        case 3: first=delete_front(first);
                break;
        case 4: first=delete_front(first);
                break;
        case 5: display(first);
                break;
        default:
            break;
        }
    }
    
}