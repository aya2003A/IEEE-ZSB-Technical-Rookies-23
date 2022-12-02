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
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    string str;
    cin>>str;
    string p=str;
    reverse(str.begin(), str.end());
    if(str==p)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
