#include<stdio.h>
#include<stdlib.h>
void insert(int *q,int front,int *rear,int ele)
{
    if(*rear==-1)
    {
        (*rear)++;
        q[*rear]=ele;
    }
    else
    {
        q=(int *)realloc(sizeof(int)*(*rear)+2);
        (*rear)++;
        q[*rear]=ele;
    }
    
}
void delte(int *q,int *front,int rear,int ele)
{
    if (*front>rear)
    {
        printf("no element in the queue");
        return;
    }
    else
    {
       
    }
    
}
int main()
{

}