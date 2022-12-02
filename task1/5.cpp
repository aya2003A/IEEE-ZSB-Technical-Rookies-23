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
    long long n,sum=0;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        if(i%3==0||i%5==0)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
