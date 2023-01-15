#include<stdio.h>
#include<stdlib.h>
#define max_size 4
void insert(int *s,int *top,int ele)
{
    (*top)++;
    
    if(*top==0)
    {
        s[*top]=ele;
    
        printf("element is pushed");
    }
    else
    {
        s=(int*)realloc(s,sizeof(int)*(*top)+1);
        s[*top]=ele;
        
        printf("element is pushed");
    }
    
    
}
void pop(int *s,int *top)
{
    if(*top==-1)
    {
        printf("underflow condition");
    }
    else{
        if (*top==-1)
        {
            printf("underflow condition");
        }
        else
        {
        int ele= s[*top];
        (*top)--;
        if(*top==-1)return;
        s=(int*)realloc(s,sizeof(int)*(*top)++);
        }
        
    }
    
}
void display(int *s,int top)
{
    printf("%d",top);
    printf("element of stack\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t",s[i]);
    }
    printf("\n");
}
int main()
{
    int *s,top=-1,ch,size,ele;
    
    s=(int *)malloc(sizeof(int));
    while (1)
    {
        printf("1.push,2.pop,3.display,4.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter the element");
                    scanf("%d",&ele);
                    insert(s,&top,ele);
                    break;
            case 2:display(s,top);
                    break;
            case 3:pop(s,&top);
                    break;
            default: exit(0);
        }
    }
    

}