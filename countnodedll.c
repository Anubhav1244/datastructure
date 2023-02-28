#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int info;
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
NODE insert_rear(NODE first,int ele)
{
    NODE temp;
    temp=getnode();
    temp->info=ele;
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
 void display(NODE first)
  {

     if(first==NULL)
     {

         printf("the dll is empty\n");
         return;
    }     
    NODE curr;
  curr=first;
     while(curr!=NULL)
    {
        printf("%d\t",curr->info);
        curr=curr->rlink;
     }
     
 }
int count_node(NODE first)
  {
	int count=0;
     if(first==NULL)
     {

         printf("the dll is empty\n");
         return 0;
    }     
    NODE curr;
    curr=first;
     while(curr!=NULL)
    {
        count++;
         curr=curr->rlink;
     }
     return count;
 }
 
int main()
{
	NODE first;
	first=NULL;
	first=insert_rear(first,12);
	first=insert_rear(first,13);
	first=insert_rear(first,14);
	first=insert_rear(first,15);
	first=insert_rear(first,16);
	display(first);
	printf("\n%d",count_node(first));

}
