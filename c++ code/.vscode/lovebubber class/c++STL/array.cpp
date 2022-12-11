#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,4>a;
    printf("enter the element of an array");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<"element at index "<<i<<"\t"<<a.at(i)<<endl; //it return the index of element;
           
    }
    cout<<a.front()<<endl;//it return the first element of array;
    cout<<a.back()<<endl;//it return the last element of array;
    
    

}
