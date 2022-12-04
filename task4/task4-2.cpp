#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#define ll long long
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;
bool checkfind(char a,string b)
{
     if (b.find(a) != std::string::npos)
     return true;
     else
     return false;
}
bool checkindex(string all,string per)
{
    bool check=true;
    int arr[per.size()];
    for(int i=0;i<per.size();++i)
        {
     int index = all.find(per[i]);
     arr[i]=index;
        }
        sort(arr,arr+per.size());
    for(int i=0;i<per.size()-1;++i)
    {
            if(abs(arr[i]-arr[i+1])==1)
            check=true;
            else
            {check=false;
            break;
            }
            
    }
    return check;
}
int main()
{
   
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    string s1,s2;
    int counter=0,i=0;
    cin>>s1>>s2;
    while(checkfind(s1[i],s2))
    {
    ++counter;
    ++i;
    }
    if(counter==s1.size())
    {
        
        if(checkindex(s2,s1)==true)
           cout<<"true";
        else
           cout<<"false";
    }
    else
    cout<<"false";
    return 0;
}
