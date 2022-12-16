#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    string s,a;
    cin>>s;
    for(int i=0;i<s.size();)
    {
         if(s[i]=='.')
         {cout<<"0"; ++i;}
         else 
         {
          if(s[i+1]=='.')
             {cout<<"1"; i+=2;}
          else
            {cout<<"2";  i+=2;}
         }
         
     }
    return 0;
}
