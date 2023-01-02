#include<iostream>
using namespace std;
int ispossible(int arr[],int n,int m,int mid){
    int i,sum=0;
    int count=1;
    for ( i = 0; i < n; i++)
    {
        if (sum+arr[i]<=mid)
        {
            sum=sum+arr[i];
            
        }
        else
        {
            count++;
            if (count>m||arr[i]>mid)
            {
                return 0;
            }
            sum=arr[i];
        }
        
        
    }
    return 1;
    
}

int allocatebooks(int arr[],int n,int m)
{
    int s=0;
    int sum=0;
    for ( int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=(s+e)/2;
    int ans=0;
    while (s<=e)
    {
        
       if(ispossible(arr,n,m,mid))
       {
        
        ans=mid;
        e=mid-1;
       }
       else
       {
            s=mid+1;
       }
       mid=(e+s)/2;

    }
    return ans;
}

int main()
{
    int arr[10],n,m;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the number of student";
    cin>>m;
    cout<<"enter the element of array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<allocatebooks(arr,n,m);
    

}
// 4 2
// 12 34 67 90