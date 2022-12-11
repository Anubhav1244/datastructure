#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (size_t i = 1; i < 5; i++)
    {
        if(arr[i-1]>arr[i])
            count++;
    }
    if (arr[4]>arr[0])
    {
        count++;
    }
    if(count<=1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
