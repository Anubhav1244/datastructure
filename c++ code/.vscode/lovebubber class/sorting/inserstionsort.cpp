#include<iostream>
using namespace std;
void inserstionsort(int arr[],int n){
    int j;
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        for ( j = i-1; j >=0 ; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j]; // shift the value by one ;

            }
            else
            {
                break;
            }
            
            
        }
        arr[j+1]=temp;
        for ( int i = 0; i < n; i++)
        {
            cout<<arr[i];
        
        }
        cout<<"\n";
    }
    
}
int main(){
    int arr[10],n;
    cin>>n;
    for ( int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    inserstionsort(arr,n);
    
}

