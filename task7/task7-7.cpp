#include <iostream>
#include<bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,c,m,counter=0;
        cin>>n>>c>>m;
        int s=n/c; 
        counter+=s;
        while(s>=m)
        {
           counter+=s/m;
           s=s%m+s/m;
        }
        cout<<counter<<endl;
    }
    return 0;
}
