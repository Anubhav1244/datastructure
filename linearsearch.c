#include<stdio.h>
int main()
{
    int arr[10],n,key,flag=0;
    printf("enter the n value");
    scanf("%d",&n);
    printf ("enterr the element of array");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key");
    scanf("%d",&key);
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            flag=1;
            break;
        }
        

    }
    if (flag==1)
    {
        printf("key is found");

    }
    else
    {
        printf("search is unsucessful");
    }
    


}