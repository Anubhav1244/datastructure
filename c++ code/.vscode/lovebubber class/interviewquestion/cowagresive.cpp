#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int ispossible(vector<int>stalls,int mid,int k)
{
    int cowcount=1;
    int position=stalls[0];
    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-position>=mid)
        {
            cowcount+=1;
            if(cowcount==k)
            {
                return 1;
            }
            
        }
        position=stalls[i];
    }
    return 0;
}
int aggressiveCows(vector<int>stalls, int k)
{
    sort(stalls.begin(),stalls.end());
   int s=0;
    int ans;
    
    
    int e=stalls.size()-1;
    int mid=s+(e-s)/2;
    
    while(s<=e)
    {
        if(ispossible(stalls,mid,k))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        
    }
    return ans;
}

int main(){
    vector<int>stalls;
    int n,k;
    cin>>n;
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>stalls[i];
    }
    cout<<aggressiveCows(stalls,k);
}
