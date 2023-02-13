/*lower bound i.e first element>=x;
[1,2,3,4,6,7]
if x=5 the lower bound is 4(index)
x=4 the lower bound is 3(index)*/ 

#include<iostream>
using namespace std;
int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=n;
    int x;
    cin>>x;
    while (s<=e)
    {
        if (arr[mid]>=x)
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
    cout<<ans<<endl;
}