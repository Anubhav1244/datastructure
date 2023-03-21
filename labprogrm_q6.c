#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    char name[100];
    char branch[100];
    char area_of_specilization[100];
};
typedef struct employee E;
struct node
{
    E e1;
    struct node *rlink;
    struct node *llink;
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
NODE insert_front(NODE first)
{
    NODE temp;
    temp=getnode();
    printf("enter the details id ,name,branch,area");
    scanf("%d %s %s %s",&(temp->e1).id,(temp->e1).name,(temp->e1).branch,(temp->e1).area_of_specilization);
    temp->llink=temp->rlink=NULL;
    if(first==NULL)
    {
        return temp;
    }
    temp->rlink=first;
    first->llink=temp;
    return temp;
}
NODE insert_rear(NODE first)
{
    NODE temp;
    temp=getnode();
    printf("enter the details id ,name,branch,area");
    scanf("%d %s %s %s",&(temp->e1).id,(temp->e1).name,(temp->e1).branch,(temp->e1).area_of_specilization);
    temp->llink=temp->rlink=NULL;
    if(first==NULL)
    {
        return temp;
    }
    NODE curr,prev=NULL;
    curr=first;
    while(curr!=NULL)
    {
        prev=curr;
        curr=curr->rlink;
    }
    temp->llink=prev;
    prev->rlink=temp;
    return first;
}
NODE delete_front(NODE first)
{
    if(first==NULL)
    {
        printf("no element in dll");
        return NULL;
    }
    if(first->llink==NULL && first->rlink==NULL)
    {
        printf("delted item is %d %s",(first->e1).id,(first->e1).name);
        free(first);
        return NULL;
    }
    NODE next;
    next=first->rlink;
    next->llink=NULL;
    printf("delted item is %d %s",(first->e1).id,(first->e1).name);
    free(first);
    return next;

}
NODE delete_rear(NODE first)
{
     if(first==NULL)
    {
        printf("no element in dll");
        return NULL;
    }
    if(first->llink==NULL && first->rlink==NULL)
    {
        printf("delted item is %d %s",(first->e1).id,(first->e1).name);
        free(first);
        return NULL;
    }
    NODE curr;
    curr=first;
    while(curr->rlink!=NULL)
    {
        curr=curr->rlink;

    }
    (curr->llink)->rlink=NULL;
    printf("delted item is %d %s",(curr->e1).id,(curr->e1).name);
    free(curr);
    return first;

}
int count_node(NODE first)
{
    int count=0;
    if(first==NULL)
    {
        return 0;
    }
    NODE curr;
    curr=first;
    while(curr!=NULL)
    {
        curr=curr->rlink;
        count++;
    }
    return count;

}

int main()
{
    NODE first;
    first=NULL;
    first=insert_front(first);
    int c=count_node(first);
    printf("%d",c);
    
}