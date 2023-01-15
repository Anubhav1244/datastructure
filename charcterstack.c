#include<stdio.h>
#define M 4
void push(char s[],int *top,int ele)
{
    if(*top==M-1)
    {
        printf("overflow condtion");

    }
    else
    {
        (*top)++;
        s[*top]=ele;
        printf("element is pushed");
    }
}
void pop(char s[],int *top)
{
    if(*top==-1)
    {
        printf("underflow condition");
    }
    else{
        char symbol=s[*top];
        (*top)--;

    }
}
void display(char s[],int top)
{
    for (int i = 0; i <=top; i++)
    {
        printf(" %c",s[i]);
    }
    
}
int main()
{
    char s[10],ele;
    int top=-1,ch;
    
    
    while (1)
    {
        printf("\n1.push,2.pop,3.display,4.exit\n");
        printf("\nenter the choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("enter the element");
                scanf(" %c",&ele);
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