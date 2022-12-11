#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int arr[10], temp[10];
    cout<<2%5;
    int k=1; //number of times of rotation,
    
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        temp[(i+k)%5]=arr[i];//rotated right side;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"\t"<<temp[i];
    }
    

}