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
    int a;
    vector<int> v;
   while(cin>>a)
   { 
       v.push_back(a);
   }
   v.erase( unique( v.begin(), v.end() ), v.end() );
   for (int e: v)
       cout<<e<<" ";
    return 0;
}
