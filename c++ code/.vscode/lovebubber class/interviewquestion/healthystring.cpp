//healthy string codechef promblem; 
#include <bits/stdc++.h>
using namespace std;
bool check(string s1,string s)
{
    int count=0;
    for(int j=0;j<s1.size();j++)
        for(int i=0;i<s.size();i++)
        {
            if(s1[j]==s[i])
            {
                    count++;
                    break;
                    
            }
        
         }
         if(count==s1.size())return true;
         else return false;
}
bool count(string s1,string s2)
{
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());

	for ( int i = 0;s1[i]!='\0' ; i++)
	{
		if(count(s1.begin(),s1.end(),s1[i])!=count(s2.begin(),s2.end(),s2[i]))return false;

		
	}
	return true;
	
}
void odd_ans(string s1)
{
	int mid=(s1.size())/2,i,k;
	    char str1[1000],str2[1000];
	    for(i=0;i<mid;i++)
	    {
	        str1[i]=s1[i];
	    }
	    str1[i]='\0';
       
	    int j=0;
	    for(k=mid+1;k<s1.size();k++)
	    {
	        str2[j]=s1[k];
	        j++;
	    }
	    str2[j]='\0';
        
	    if(check(str1,str2)&&count(str1,str2))cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;

}
void even_ans(string s1)
{
	int mid=(s1.size())/2,i,k;
	
	char str1[1000],str2[1000];
	    for(i=0;i<mid;i++)
	    {
	        str1[i]=s1[i];
	    }
	    str1[i]='\0';
		
		int j=0;
	    for(k=mid;k<=s1.size();k++)
	    {
	        str2[j]=s1[k];
	        j++;
	    }
	    str2[j]='\0';
		
        
	    if(check(str1,str2)&&count(str1,str2))cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1;
	    cin>>s1;
	    if(s1.size()%2!=0)odd_ans(s1);
		else even_ans(s1);
	    
	}
	return 0;
}
