#include<stdio.h>
#include<stdlib.h>
int max_size=4;
void insert(int q[],int *rear,int front,int ele)
{
    if (*rear==max_size-1)
    {
        printf("overflow condition");
        return;
    }
    (*rear)++;
    q[*rear]=ele;
    printf("element is added in the stack");
}
void delte(int q[],int rear,int *front)
{
    if(*front>rear)
    {
        printf("undreflow condition");
        return;
    }
    int ele=q[*front];
    (*front)++;
    printf("the element %d is delted",ele);
}
void display(int q[],int front,int rear)
{
    if(front>rear)
    {
        printf("no element in the queue");
        return;
    }
    for (int i = front; i <=rear; i++)
    {
        printf("%d",q[i]);
    }
    
}
int main()
{
    int q[1000],front =0,rear=-1,ch,ele;
    while (1)
    {
        printf("\nenter 1.insert,2.delete,3.display,4.exit\n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the element");
                    scanf("%d",&ele);
                    insert(q,&rear,front,ele);
                    break;
            case 2:delte(q,rear,&front);
                    break;
            case 3: display(q,front,rear);
                    break;
            default: exit(0);

        }
    }
    

}