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
    long long a,b,gcd;
    cin>>a>>b;
    if(b>a)
       swap(a,b);
    for(int i=1;i<b;++i)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    cout<<gcd<<endl;
    return 0;
}
