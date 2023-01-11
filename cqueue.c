#include<stdio.h>
#include<stdlib.h>
int max=4;
void insert(int cq[],int *rear,int *count,int ele)
{
    if(*count==max)
    {
        printf("overflow condition");
        return;
    }
    *rear=(*rear+1)%max;
    cq[*rear]=ele;
    (*count)++;
    printf("element is inserted\n");

}
void delete(int cq[],int *front,int *count)
{
    if(*count==0)
    {
        printf("no element inside the queue");
        return;

    }
    int ele=cq[*front];
    *front=(*front+1)%max;
    (*count)--;
    printf("%d is delted from the queue\n",ele);

}
void display(int cq[],int front,int count)
{
    if(count==0)
    {
        printf("no element in the queue\n");
        return;
    }
    printf("element in the queue\n");
   for(int i=front;count!=0;i=(i+1)%max)
   {
        printf("%d\t",cq[i]);
        count--;
   }

}
int main()
{
    int cq[max],front=0,rear=max-1,ch,ele,count=0;
    while(1)
    {
        printf("1.insert,2.delte,3.display,4.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: printf("enter the element");
                    scanf("%d",&ele);
                    insert(cq,&rear,&count,ele);
                    break;
            case 2: delete(cq,&front,&count);
                    break;
            case 3: display(cq,front,count);
                    break;
            default: exit(0);

        }
        
    }
}