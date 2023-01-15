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
        if(x==NULL)
        {
            printf("memory is not allocated\n");
            exit(0);
        }
        return x;
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
    int count(NODE first) 
    {
        NODE curr;
        int count;
        curr=first;
        if (curr==NULL)
        {
            return 0;
        }
        
        while (curr!=NULL)
        {
            count++;
            curr=curr->link;
        }
        return count;
        
    }
    int main()
    {
         NODE first;
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
        case 3: printf("%d",count(first));
       
        default: exit(0);
        
       }
    }
    
    
    }
    
