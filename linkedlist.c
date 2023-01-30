#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
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
NODE insert_rear(NODE first,int ele)
{
    NODE temp;
    temp=getnode();
    temp->info=ele;
    temp->link=NULL;
    NODE curr,prev;
    curr=first;
    while (curr!=NULL)
    {
        prev=curr;
        curr=curr->link;
    }
    prev->link=temp;
    return first;
    
}
NODE insert_front(NODE first,int ele)
{
    NODE temp;
    temp=getnode();
    temp->info=ele;
    temp->link=first;
    return temp;

}
NODE delte_front(NODE first)
{
    NODE next;
    if(first==NULL)
    {
        printf("Sll is empty\n");
        return NULL;
    }
    int ele=first->info;
    next=first->link;
    printf("%d is deletd from the linked list",ele);
    free(first);
    return next;
}

NODE delte_rear(NODE first)
{
    NODE curr,prev;
    if (first==NULL)
    {
        printf("sll is empty");
        return NULL;
    }
    curr=first;
    prev=NULL;
    while (curr->link!=NULL)
    {
        prev=curr;
        curr=curr->link;
    }
    int ele=curr->info;
    free(curr);
    prev->link=NULL;
    printf("%d,is delted from the linked list\n",ele);
    return first;

    
}
void conactenate_sll(NODE first,NODE second)
{
    NODE curr,prev;
    curr=first;
    prev=NULL;
    while (curr!=NULL)
    {
        prev=curr;
        curr=curr->link;
    }
    prev->link=second;
    return first;

}
void display(NODE first)
{
    if (first==NULL)
    {
        printf("sll is empty\n");
        return ;
    }
    NODE curr=first;
    while(curr!=NULL)
    {
        printf("%d\t",curr->info);
        curr=curr->link;
    }
    
}

int main()
{
    NODE first,second;
    first=NULL;
    
    int ch,ele;
    while (1)
    {
       printf("1.insert_front,2.delte_front,3.display,4.insert_rear,5.delte_rear,6.exit\n");
       printf("enter your choice");
       scanf("%d",&ch);
       switch (ch)
       {
       case 1:  printf("enter the element\n");
                scanf("%d",&ele);
                first=insert_front(first,ele);
                
                break;
        case 2: first=delte_front(first);
                break;
        case 3: display(first);
                break;
        case 4: printf("enter the element\n");
                scanf("%d",&ele); 
                insert_rear(first,ele);
                break;
        case 5: delte_rear(first);
                break;
       
        default: exit(0);
        
       }//commit;
    }
    
    
    
    
}