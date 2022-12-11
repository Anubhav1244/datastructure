#include<iostream>
#include<vector>//it is dyanamic in nature;
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);//add the element in the last of the array;
    cout<<"capacity of vaector"<<v.capacity()<<endl;//it return the capacity of vector it may be change according to element;
    v.push_back(2);
    cout<<"capacity of vaector"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity of vaector"<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"capacity of vaector"<<v.capacity()<<endl;
    cout<<"the first element of array is"<<v.front()<<endl;
    cout<<"the back element of array is"<<v.back()<<endl;
    cout<<"the size of array is"<<v.size();
    vector<int> a(5,1);//it inlisalize the all element to 1;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
    cout<<"\n";
    v.pop_back();//it remove the last element of array;
    vector<int>last(a);//it copy the all element of a in last;
    for (int i = 0; i < 5; i++)
    {
        cout<<last[i];
    }
    cout<<"\n";
}