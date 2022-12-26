#include<stdio.h>
#include<stdlib.h>
#define M 20


void push(char s[],int *top,char elem)
{
    if (*top==M-1)
    {
        printf("oerflow condition");
        return;
    }
    (*top)++;
    s[*top]=elem;
   
    
}
char pop(char s[],int *top)
{
    char elelm;
    if (*top==-1)
    {
        printf("underflow condition");
        
    }
    else
    {
        elelm=s[*top];
        (*top)--;
        
        return elelm;
    }
}

int F(char ch)
{
    switch (ch)
    {
    case '+':
    case '-': return 2;
            break;
    case '*':
    case '/':
    case  '%': return 4;
                break;
    case  '$':
    case  '^':return 5;
                break;
    case  '(': return 0;
                break;
    case  '#': return -1;
                break;
    default: return 8;
                break;
    }
}
int G(char ch)
{
    switch (ch)
    {
    case '+':
    case '-': return 1;
                break;
    case '*':
    case '/':
    case  '%': return 3;
                break;
    case  '$':
    case  '^':return 6;
                break;
    case  '(': return 9;
                break;
    case  ')': return 0;
                break;
    case  '#': return -1;
                break;
    default: return 7;
                break;
    }
}

void infix_to_post(char infix[],char postfix[])
{
  
    int j=0,top=-1;
    char s[M];
    push(s,&top,'#');
    
    for (int i = 0; infix[i]!='\0'; i++)
    {   
        char symbol=infix[i];
       
        while (F(s[top])>G(symbol))
        {
           
            postfix[j++]=pop(s,&top);
        

        }
        if (F(s[top])!=G(symbol))
        {
          
            push(s,&top,symbol);
             
             
        }
        else
        {
            pop(s,&top);
        }

    }
    
    
    while (top!=0)
    {
       
        postfix[j++]=pop(s,&top);
        
    }
    
    postfix[j]='\0';
   
}
int main()
{
    char infix[100],postfix[100];
    int top=-1;
    scanf("%s",infix);
    infix_to_post(infix,postfix);
      printf("%s",postfix);
   
}