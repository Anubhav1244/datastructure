#include <algorithm>
#include <iostream>
using namespace std;
int ispossible(int arr[],int n,int mid,int k){
    int cowcount=1;
    int position=arr[0];
    for ( int i = 0; i < n; i++)
    {
        if ((arr[i]-position)>=mid)
        {
            cowcount+=1;
            if (cowcount==k)
            {
                return 1;
            }
            
        }
        position=arr[i];

    }
    return 0;
    

}
int agreesive(int arr[],int n,int k){

    
    sort(arr,arr+n);
    int s=0,ans=-1;
    int largest=arr[0];
    for ( int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
    cout<<largest;
    int e=largest;
    int mid=(e+s)/2;
    while (e<=s)
    {
        if (ispossible(arr,n,mid,k))
        {
            ans=mid;
            
            s=mid+1;

        }
        else
        {
            e=mid-1;
            
        }
        mid=(s+e)/2;
        
    }
    return ans;
}

int main(){
    int arr[20],n,k;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<agreesive(arr,n,k);
}
