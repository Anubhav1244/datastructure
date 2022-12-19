#include<bits/stdc++.h>
#include<string>
using namespace std;
bool checkPalindrome(string s)
    
{
    
    int j=0;
    
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]>='Z'));
        {
             s[j]=s[i];
             j++;
        } 
        
    }
    s[j]='\0';
    cout<<s;
    
   
    for(int k=0;k<j;k++)
    {
        if(s[j-k-1]!=s[k])
            return false;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    if(checkPalindrome(s))
        cout<<"yes";

}
// N2 i&nJA?a& jnI2n