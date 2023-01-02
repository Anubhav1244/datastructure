#include<stdio.h>
#include<string.h>
int max_size=4;
struct employee
{
    int eid;
    char ename[20];
};
typedef struct employee E;
void insert(E e1[],int *rear,int front,int ele,char name[] )
{
    if (*rear==max_size-1)
    {
        printf("overflow condition");
        return;
    }
    (*rear)++;
    e1[*rear].eid=ele;
    strcpy(e1[*rear].ename,name);
    printf("elements are inserted");
}
void delte(E e1[],int *front,int rear)
{
    if (rear<*front)

    {
        printf("no element inside the queue");
        return;
    }
    
    int ele=e1[*front].eid;
    char name[200];
    strcpy(name,e1[*front].ename);
    (*front)++;
    printf("id %d name %s is deletd form the queue",ele,name);
}
void display(E e1[],int front,int rear)
{
    if (rear<front)
    {
        printf("no element in the array");
        return;
    }
    for (int i = front; i <=rear; i++)
    {
        printf("%d %s",e1[i].eid,e1[i].ename);
    }
    
    
}
int main()
{
    E e1[1000];
    int front=0,rear=-1,id,ch;
    char name[20];
   
        while (1)
    {
        printf("\nenter 1.insert,2.delete,3.display,4.exit\n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the element");
                    scanf("%d %s",&id,name);
                    insert(e1,&rear,front,id,name);
                    break;
            case 2:delte(e1,&front,rear);
                    break;
            case 3: display(e1,front,rear);
                    break;
            default: exit(0);

        }
    }
    
    

}