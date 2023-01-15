#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char name[20];
    struct node *link;

};
typedef struct node *NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("memory is not allocated\n");
        exit(0);
    }
    return x;
}
NODE insert_front(NODE first,char ele[])
{
    NODE temp;
    temp=getnode();
    strcpy(temp->name,ele);
    temp->link=first;
    return temp;
}
NODE delte_front(NODE first)
{
    if (first==NULL)
    {
        printf("sll is empty\n");
        return NULL;
    }
    NODE next,curr;
    curr=first;
    char name[20];
    strcpy(name,curr->name);
    next=first->link;
    free(first);
    return next;
    

}
void contenate_sll(NODE first)
{
    char name[1000]=" ";
    NODE curr;
    curr=first;
    if (curr==NULL)
    {
        printf("Sll is empty\n");
        return;
    }
    
    while (curr!=NULL)
    {
        strcat(name,curr->name);
        curr=curr->link;
    }
    printf("%s",name);
}
void display(NODE first)
{
    if (first==NULL)
    {
        printf("sll is empty\n");
        return;
    }
    NODE curr;
    
    curr=first;
    while (curr!=NULL)
    {
        printf("%s\t",curr->name);
        curr=curr->link;
    }
    
}

int main()
{
    NODE first;
    first=NULL;
    
    int ch;
    char name[20];
    while (1)
    {
       printf("1.insert_front,2.delte_front,3.display\n");
       printf("enter your choice");
       scanf("%d",&ch);
       switch (ch)
       {
       case 1:  printf("enter the element\n");
                scanf("%s",name);
                first=insert_front(first,name);
                break;
        case 2: first=delte_front(first);
                break;
        case 3: display(first);
                break;
        
       case 4: contenate_sll(first);
        default: exit(0);
        
       }//commit;
    }
    
}