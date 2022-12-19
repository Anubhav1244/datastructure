#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"enter the string";
    cin>>name;
    int s=0;
    int e=name.length()-1;
    while (s<e)
    {
       swap(name[s++],name[e--]);
    }
    cout<<name;
    



}