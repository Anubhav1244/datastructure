#include<iostream>
using namespace std;


void sort(int arr[],int n){
    int i,j,min,temp;
    
    for ( i = 0; i < n-1; i++)
    {
         min=i;
         for ( j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                min=j;
            }
           
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    
    }
    
}
void display(int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    int arr[10],n;
    cin>>n;
    for ( int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    sort(arr,n);
    display(arr,n);
}