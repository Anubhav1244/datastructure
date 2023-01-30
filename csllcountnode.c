
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
NODE insert_front(NODE last, int ele)
{
    
    NODE temp;
    temp=getnode();
    temp->info=ele;
    
    if (last==NULL)
    {
        last=temp;
        
    }
    else
    {
        temp->link=last->link;
        
    }
    last->link=temp;
    return last;
    
}

int count_node(NODE last)
{
    int count=1;
    if (last==NULL)
    {
        return 0;

    }
    NODE curr;
    curr=last->link;
    while (curr!=last)
    {
        count++;
        curr=curr->link;
    }
    return count;
    
}
void sort(NODE last)
{
    int n=count_node(last);
    NODE curr,next;
    if(last==NULL)
    {
        printf("no element");
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        curr=last->link;
        next=curr->link;
    }
    
    
}


int main()
{
    NODE last;
    last=NULL;
    int ch,ele,res,n;
    
    while (1)
    {
        printf("\n1.insert,2.count,3.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: printf("enter the ele");
                scanf("%d",&ele);
                last=insert_front(last,ele);
                break;
        
        case 2: 
                printf("%d",count_node(last));
                break;

      
        default:
            exit(0);
            
        }
    }
    
}