/*A conveyor belt has packages that must be shipped from one port to another within days days.
The ith package on the conveyor belt has a weight of weights[i].
 Each day, we load the ship with packages on the conveyor belt (in the order given by weights).
 We may not load more weight than the maximum weight capacity of the ship.
Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.
 */
#include<iostream>
using namespace std;
int ispossible(int arr[],int n,int mid,int days){
    int count=1,i;
    int sum=0;
    for ( i = 0; i < n; i++)
    {
        if (arr[i]+sum<=mid)
        {
            sum=sum+arr[i];

        }
        else
        {
            count+=1;
            if (count>days||arr[i]>mid)
            {
                return 0;
            }
            sum=arr[i];
        }
        
        
    }
    return 1;
}

int belt(int arr[],int n,int days){
    int s=0,sum=0,ans;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (ispossible(arr,n,mid,days))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
    
}
int main(){
    int arr[10],n,days;
    cin>>n;
    cin>>days;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<belt(arr,n,days);
    
}