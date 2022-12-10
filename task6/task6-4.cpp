#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include<string>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
#define endd "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;
void acmTeam(string *arr,int n,int m) {
int counter=0,maxx=0,all=0,s=2;
for(int i=0;i<n;++i)
{
    counter=0;
    for(int j=i+1;j<n;++j)
    {
        counter=0;
        for(int a=0;a<m;++a)
        {
        if(arr[i][a]=='1'||arr[j][a]=='1')
        ++counter;
        }
        if(counter>maxx)
        {maxx=counter; all=1;}
        else if(counter==maxx)
        ++all;
    }
}
cout<<maxx<<endl;
cout<<all<<endl;
}

int main()
{
    FAST
    int n,m;
    cin>>n>>m;
    string arr[n];
    for (int i = 0; i <n; i++) {
        cin>>arr[i];
    }
   acmTeam(arr,n,m);
    return 0;
}
