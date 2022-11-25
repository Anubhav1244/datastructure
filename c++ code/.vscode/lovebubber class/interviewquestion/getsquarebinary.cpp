// get square from binary search
#include<iostream>
using namespace std;
long long int getsquare(int n){
    int s=0;
    int e=n;
    long long int ans=-1;
    long long int  mid=(e+s)/2;
    while (s<=e)
    {
        long long int square=mid*mid;
        if (square==n)
        {
            return mid;
        }
        else if (square<n)
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
double moreprecession(int n,int precession,int tempsol){
    double factor=1;
    double ans=tempsol;

    for ( int i = 0; i < precession; i++)
    {
        factor=factor/10;
        for (double j = ans; j*j <n ; j=j+factor)
        {
            ans=j;
        }
        
    }
    return ans;
}
int main(){
    int n,ans;
    cout<<"enter the number";
    cin>>n;
    
    
    ans=getsquare(n);

    cout<<moreprecession(n,3,ans);



}