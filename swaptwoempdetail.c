#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[10];

};
typedef struct emp E;
void swap(E *e1,E *e2)
{
    char temp[10];
    strcpy(temp,(*e1).name);
    strcpy((*e1).name,(*e2).name);
    strcpy((*e2).name,temp);
}

int main()
{
        E e1,e2;
        
        printf("enter the name and id of employee1:\n");
        scanf(" %s %d",e1.name,&e1.id);
        printf("enter the name and id of employee2:\n");
        scanf(" %s %d",e2.name,&e2.id);
        swap(&e1,&e2);
        printf("after swapping\n");
        printf("%s %d\n",e1.name,e1.id);
        printf("%s %d\n",e2.name,e2.id);




}