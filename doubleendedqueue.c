#include<stdio.h>
int max_size=10;
void insert_rear(int dq[10],int ele,int front,int *rear)
{
    if (*rear==max_size-1)
    {
        printf("overflow condition");
        return;
    }
    (*rear)++;
    dq[*rear]=ele;
    printf("elemented is inserted");
}
void delete_front(int dq[10],int *front,int rear)
{
    if (*front>rear)
    {
        printf("underflow condition");
        return;
    }
    int ele=dq[*front];
    (*front)--;
    printf("deleted item is %d",ele);
}
void insert_front(int dq[10],int *front,int *rear,int ele)
{
    if ((*front)==0 && (*rear)==0)
    {
        (*rear)++;
        dq[*rear]=ele;
    }
    else if ((*front)!=0)
    {
        (*front)--;
        dq[*front]=ele;
    }
    else
    {
        printf("insertion is not possible");
    }
    
}
void delete_rear(int dq[10],int *front,int *rear)
{
    if ((*front)>(*rear))
    {
        printf("no element in the queue");
        
    }
    else
    {
        printf("deleted item is %d",dq[*rear]);
        (*rear)--;
        if ((*front)>(*rear))
        {
            (*front)=0;
            (*rear)=-1;
        }
        
    }
}
void display(int dq[10],int front,int rear)
{
    if ((front)>(rear))
    {
        printf("no element");
        return;
    }
    printf("elements are:");
    for (int i=front; i <= rear; i++)
    {
        printf("%d\t",dq[i]);
    }
    
    
}
int main()
{
    int dq[max_size],front=0,rear=-1;
    insert_rear(dq,2,front,&rear);
    //  insert_rear(dq,2,front,&rear);
    //   insert_rear(dq,2,front,&rear);
    //    insert_rear(dq,2,front,&rear);
    insert_front(dq,&front,&rear,3);
    // insert_front(dq,&front,&rear,4);
    delete_rear(dq,&front,&rear);
     insert_front(dq,&front,&rear,6);
     insert_front(dq,&front,&rear,7);
     display(dq,front,rear);
}