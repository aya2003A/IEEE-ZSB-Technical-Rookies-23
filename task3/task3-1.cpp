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
    int size;
    long long ans=0,sum1=0,sum2=0;
    cin>>size;
    int matrix[size][size];
    for(int i=0;i<size;++i)
    {
        for(int j=0;j<size;++j)
        cin>>matrix[i][j];
    }
    for(int i=0;i<size;++i)
    {
        for(int j=0,jj=size-1;j<size;++j,--jj)
             {
                 if(i==j)
                 {
                     sum1+=matrix[i][j];
                     sum2+=matrix[i][jj];
                 }
             }
    }
    ans=sum1-sum2;
    if(ans>0)
        cout<<ans<<endl;
    else
        cout<<ans*(-1)<<endl;
    return 0;
}
