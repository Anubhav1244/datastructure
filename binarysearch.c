#include<stdio.h>
int main()
{
    int arr[10],n,flag=0;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the element in the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("enter the key");
    scanf("%d",&key);
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
            flag=1;
            break;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    if (flag==1)
    {
        printf("key is found");
    }
    else{
        printf("key is not found");
    }
}