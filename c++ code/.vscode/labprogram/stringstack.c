#include<stdio.h>
#include<string.h>
int max_size=4;

void insert(char s[max_size][80],int *top,char name[80])
{
    
    if (*top==max_size-1)
    {
        printf("overflow condition");
        return;
    }
    (*top)++;
   strcpy(s[*top],name);
   printf("element is inserted");
}
void pop(char s[max_size][80],int *top)
{
    if (*top==-1)
    {
        printf("underflow condition");
        return;
    }
    char name[100];
    strcpy(name,s[*top]);
    (*top)--;
    printf("the element %s is pop out",name);
}
void display(char s[max_size][80],int top)
{
    if(top==-1)
    {
        printf("no element inside the stack");
        return;

    }
    for (int i = 0; i <=top; i++)
    {
        printf("%s",s[i]);
    }
    
        
    
    
}
int main()
{
    char s[max_size][80];
    int top=-1,ch;
    char name[100];
    while (1)
    {
        printf("\nenter 1.insert,2.delte,3.display,4.exit\n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: printf("enter the name");
                scanf("%s",name);
                insert(s,&top,name);
                break;

        case 2: pop(s,&top);
                break;
        case 3: display(s,top);
                break;  
        default:exit(0);
                break;
        }
       
    }
    

}