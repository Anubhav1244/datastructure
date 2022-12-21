#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 4

struct stack
{
    int pos1;
    int pos2;

};
typedef struct stack S;
void push(S s1[],int *top,int elem,int elem2)
{
    if (*top==MAX_SIZE-1)
    {
        printf("oerflow condition");
        return;
    }
    (*top)++;
    s1[*top].pos1=elem;
    s1[*top].pos2=elem2;
    printf("element is pushed\n");
    
}
void pop(S s1[],int *top)
{
    if (*top==-1)
    {
        printf("underflow condition");
        return;
    }
    int elelm=s1[*top].pos1;
    int elelm2=s1[*top].pos2;
    (*top)--;
    printf("the element %d %d is pop out\n",elelm,elelm2);
}
void display(S s1[],int top)
{
    for (int i = 0; i <= top; i++)
    {
        printf(" %d %d \n",s1[i].pos1,s1[i].pos2);
    }
    
}

int main()
{
    S s1[10];
    int top=-1,ch,elem1,elem2;
     while(1)
    {
           
        printf("1.insert,2.pop,3.display,4.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
                printf("enter the pos1,pos2");
                scanf("%d %d",&elem1,&elem2);
                push(s1,&top,elem1,elem2);
                break;
                 
        case 2: pop(s1,&top);
                break;
                
        case 3: display(s1,top);
                break;
                
        default: exit(0); 
                break;
        } 
   }
   
}