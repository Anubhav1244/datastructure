#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push(int s[20],int *top,int ele)
{
    if (*top==20)
    {
        printf("overflow condtion");
    }
    else{
        (*top)++;
        s[*top]=ele;

    }
}
int pop(int s[],int *top)
{
    if (*top==-1)
    {
        printf("underflow conditon");
    }
    else
    {
        int ele=s[*top];
        (*top)--;
        return ele;
    }
    
}
int compute(int op1,int op2,char ch)
{
    int ans;
    switch (ch)
    {
    case '+':
        ans= op1+op2;
        break;
    case '-':
        ans= op1-op2;
        break;
    case '/':
        ans= op1/op2;
        break;
    case '*':
        ans= op1*op2;
        break;

    }
    return ans;
}
int  evaluation( char postfix[])
{
    int s[20],i=0,top=-1,op1,op2;
    char symbol;
    for (int  i = 0; postfix[i]!='\0'; i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
        {
            push(s,&top,symbol-'0');
            
        }
        else
        {
            op2=pop(s,&top);
            op1=pop(s,&top);
            int res=compute(op1,op2,symbol);
            push(s,&top,res);
        }
        
        
    }
    return pop(s,&top);


}
int main()
{
    char postfix[100];
    scanf("%s",postfix);
    printf("%d",evaluation(postfix));
}
    