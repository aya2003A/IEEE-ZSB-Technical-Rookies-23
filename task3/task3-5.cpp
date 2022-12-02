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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    long long Acity,Scity,a,b;
    cin>>Acity>>Scity>>a>>b;
    int arr[Acity]={0};
    for(int i=0;i<Scity;++i)
    {
        for(int j=0;j<Acity;++j)
        {
           int space1=abs(j-a);
           int space2=abs(j-b);
           if(space1<space2)
               arr[j]=space1;
            else
               arr[j]=space2;
        }
    }
    int maxdistance=INT_MIN;
    for(int i=0;i<Acity;++i)
    {
        if(arr[i]>maxdistance)
        maxdistance=arr[i];
    }
    cout<<maxdistance;
    return 0;
}
