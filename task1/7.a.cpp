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
    string s,rev;
    cin>>s;
    rev=s;
    reverse(s.begin(), s.end());
    if(s==rev)
    cout<<s<<"\nYES";
    else
    cout<<s<<"\nNO";
    return 0;
}
