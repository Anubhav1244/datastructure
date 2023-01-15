#include<stdio.h>
#include<stdlib.h>
int max=3;
int *insert_cq(int *q,int *rear,int *front,int *count,int ele)
{
    if(*count==max)
    {
        max=max*2;
        int j=0;
        int *p=(int*)malloc(sizeof(int)*max);
        if(*front<*rear)
        {
            for(int i=*front;i<=max/2;i++)
            {
                p[j++]=q[i];
            }

        }
        else if(*front>*rear)
        {
            for ( int i = *front; i <=max/2; i++)
            {
                p[j++]=q[i];
            }
            for(int i=0;i<=*rear;i++)
            {
                p[j++]=q[i];
            }
            p[j]='\0';
            *front=0;
            *rear=max/2;
        }
        *rear=(*rear+1)%max;
        q[*rear]=ele;
        (*count)++;
        printf("element is inserted\n");
        return p;
    }
    else
    {
        *rear=(*rear+1)%max;
        q[*rear]=ele;
        (*count)++;
         printf("element is inserted\n");
         return q;
    }
    
}
void delete(int *q,int *front,int *count)
{
    if(*count==0)
    {
        printf("no element inside the queue");
        return;

    }
    int ele=q[*front];
    *front=(*front+1)%max;
    (*count)--;
    printf("%d is delted from the queue\n",ele);

}
void display(int *q,int front,int count)
{
    if(count==0)
    {
        printf("no element in the queue\n");
        return;
    }
    printf("element in the queue\n");
   for(int i=front;count!=0;i=(i+1)%max)
   {
        printf("%d\t",q[i]);
        count--;
   }

}
int main()
{
    int *q,front=0,rear=max-1,count=0,ele,ch;
    q=(int *)malloc(sizeof(int));
    while(1)
    {
        printf("1.insert,2.delte,3.display,4.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: printf("enter the element");
                    scanf("%d",&ele);
                   q=insert_cq(q,&rear,&front,&count,ele);
                    break;
            case 2: delete(q,&front,&count);
                    break;
            case 3: display(q,front,count);
                    break;
            default: exit(0);
        }
    }
}