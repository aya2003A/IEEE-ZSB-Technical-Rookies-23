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
    long long n,rev=0,temp=0;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        rev=n%10+rev*10;
        n/=10;
    }
    cout<<rev<<endl;
    if(rev==temp)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
