#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 4
void push(int s[],int *top,int elem)
{
    if (*top==MAX_SIZE-1)
    {
        printf("oerflow condition");
        return;
    }
    (*top)++;
    s[*top]=elem;
    printf("element is pushed");
    
}
void pop(int s[],int *top)
{
    if (*top==-1)
    {
        printf("underflow condition");
        return;
    }
    int elelm=s[*top];
    (*top)--;
    printf("the element %d is pop out",elelm);
}
void display(int s[],int top)
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d",s[i]);
    }
    
}
int main()
{
    int s[10],top=-1,ch,ele;
    printf("1.push,2.pop,3.display,4.exit\n");
    
    while (1)
    {
        printf("\nenter the choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("entre the element");
                scanf("%d",&ele);
                push(s,&top,ele);
                 break;
        case 2:pop(s,&top);
                break;
        case 3:display(s,top);
                break;
        
        default:exit(0);
                break;
        }
    }
    
    
}