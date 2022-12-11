#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);//it add the element in last of the array;
    d.push_front(2);//it add the element in front of the array;
    for (int i = 0; i < 2; i++)
    {
        cout<<d[i]<<endl;
    }
      
    
}