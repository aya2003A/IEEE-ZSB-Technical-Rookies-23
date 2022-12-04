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
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;++i)
    cin>>arr[i];
    long long num=arr[0];
    for(int i=1;i<x;++i)
    {
        num*=10;
        num+=arr[i];
    }
    num+=1;
    for(int i=x-1;i>=0;--i)
    {
        arr[i]=num%10;
        num/=10;
    }
    for(int i=0;i<x;++i)
    cout<<arr[i]<<" ";
    return 0;
}
