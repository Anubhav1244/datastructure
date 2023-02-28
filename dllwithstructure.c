#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
    int id;
    int sal;
    char name[20];
};
typedef struct employee E;
struct node
{
    E e1;
    struct node* rlink;
    struct node* llink;
};
typedef struct node* NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("MEMORY NOT AVAILABLE\n");
        exit(0);

    }
    return x;
}
NODE insert_rear(NODE first)
{
    NODE temp;
    temp=getnode();
    printf("enter the detail of employee");
    scanf("%d %s %d",&(temp->e1).id,(temp->e1).name,&(temp->e1).sal);
    temp->llink=temp->rlink=NULL;
    if(first==NULL)
    {
        return temp;

    }
    NODE curr;
    curr=first;
    while(curr->rlink!=NULL)
    {
        curr=curr->rlink;

    }
    curr->rlink=temp;
    temp->llink=curr;
    return first;
}

void display_capA(NODE first)
{
    if (first==NULL)
    {
        printf("no element in dll\n");
        return;
    }
    NODE curr;
    curr=first;
    while (curr!=NULL)
    {
        
        if((curr->e1).name[0]=='A')
        {
            printf("%d %s %d\n",(curr->e1).id,(curr->e1).name,(curr->e1).sal);
        }
        curr=curr->rlink;
    }
    
}
// void display(NODE first)
// {

//     if(first==NULL)
//     {

//         printf("the dll is empty\n");
//         return;
//     }
//     NODE curr;
//     curr=first;
//     while(curr!=NULL)
//     {
//         printf("1");
//         printf("%d %s %d\n",(curr->e1).id,(curr->e1).name,(curr->e1).sal);
//         curr=curr->rlink;
//     }
//     printf("\n");
// }
void highest_sal(NODE first)
{
    NODE curr;
    curr=first;
    int high=first->e1.sal;
    int id1;
    char name1[20];
    while (curr->rlink!=NULL)
    {
        NODE next=curr->rlink;
        if (high<next->e1.sal)
        {
            high=next->e1.sal;
            
        }
        curr=curr->rlink;
    }
    curr=first;
    while (curr!=NULL)
    {
        if (curr->e1.sal==high)
        {
            printf(" id:%d ,name:%s ,sal:%d\n",curr->e1.id,curr->e1.name,curr->e1.sal);
        }
        curr=curr->rlink;
    }
    
}
void update_detail(NODE first)
{
    NODE curr;
    curr=first;
    int id;
    printf("enter the id");
    scanf("%d",&id);
    while(curr!=NULL)
    {
        if (curr->e1.id==id)
        {
            
            printf("enter the name of new employee");
            scanf("%s",curr->e1.name);
            printf("enter the new salary of the employee");
            scanf("%d",&(curr->e1.sal));
        }
        curr=curr->rlink;
    }
    

}
int main()
{
    NODE first;
    first=NULL;
    first=insert_rear(first);
    first=insert_rear(first);
    update_detail(first);
    display_capA(first);
    // highest_sal(first);
    // highest_sal(first);


}