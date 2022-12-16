#include <iostream>
#include<bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
    int p,q,count=0;
    cin>>p>>q;
    for(int i=p;i<=q;++i)
    {
        string result=" ";
        long long d =pow(i,2);
        stringstream stream;
         stringstream ss,sss;
        stream <<d;
        stream >>result;
        string a = result.substr(0,(result.size()/2));
        string b = result.substr((result.size()/2),result.size());
        int num,num2;
        ss << a;  ss >> num;
        sss << b;  sss >> num2;
        if(i==1)
        cout<<i<<" ";
        if(num+num2==i)
        {cout<<i<<" "; ++count;}
    }
    if(count==0)
    cout<<"INVALID RANGE";
    return 0;
}
