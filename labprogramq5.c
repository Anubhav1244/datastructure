#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node* NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if (x==NULL)
    {
        printf("something went wrong");
        exit(0);

    }
    return x;
    
}
NODE  insert_front(NODE first,int ele)
{
    NODE temp;
    temp=getnode();
    temp->link=NULL;
    temp->info=ele;
    if(first==NULL)
    {
        return temp;
    }
    temp->link=first;
    return temp;

}
NODE insert_rear(NODE first,int ele)
{
    NODE temp;
    temp=getnode();
    temp->link=NULL;
    temp->info=ele;
    if(first==NULL)
    {
        return temp;

    }
    NODE curr,prev=NULL;
    curr=first;
    while (curr!=NULL)
    {
        prev=curr;
        curr=curr->link;
    }
    prev->link=temp;
    return first;
    
}
void display(NODE first)
{
    if(first==NULL)
    {
        printf("NO element in the sll");
        return;
    }
    NODE curr;
    curr=first;
    while (curr!=NULL)
    {
        printf("%d\t",curr->info);
        curr=curr->link;

    }
    
}
NODE delte_front(NODE first)
{
    if (first==NULL)
    {
        printf("no element in sll");
        return NULL;
    }
    NODE next;
    next=first->link;
    printf("delted item is %d\n",first->info);
    free(first);
    return next;
    
    
}
NODE delte_rear(NODE first)
{
    if(first==NULL)
    {
        printf("NO ELEMENT IN SLL");
        return NULL;
    }
    NODE curr,prev;
    curr=first;
    while (curr->link!=NULL)
    {
        prev=curr;
        curr=curr->link;
    }
    prev->link=NULL;
    printf("deleted item is %d\n",curr->info);
    free(curr);
    return first;
    
}
void merge_sll(NODE first, NODE second)
{
    NODE curr;
    curr=first;
    while (curr->link!=NULL)
    {
        curr=curr->link;
    }
    curr->link=second;
    printf("merge is done");
    
}
int main()
{
    NODE first;
    first=NULL;
    NODE second;
    first=insert_front(first,3);
    first=insert_front(first,3);
    first=insert_rear(first,4);
    
    second=insert_front(second,3);
    second=insert_front(second,3);
    second=insert_rear(second,4);

    merge_sll(first,second);
    display(first);
    
    
    
}
