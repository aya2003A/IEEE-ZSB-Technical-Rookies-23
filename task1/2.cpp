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
    long long l ,fac=1;
    cin>>l;
    for(int i=2;i<=l;++i)
    {
        fac*=i;
    }
    cout<<fac<<endl;
    return 0;
}
