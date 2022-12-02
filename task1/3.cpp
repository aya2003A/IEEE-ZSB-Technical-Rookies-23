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
long long sumFor(long long *arr,long long n)
{
    long long sum=0;
    for(int i=0;i<n;++i)
    {
        sum+=arr[i];
    }
    return sum;
}
long long sumWhile(long long *arr,long long n)
{
    long long sum=0,i=0;
    while(i<n)
    {
       sum+=arr[i];
       ++i; 
    }
     return sum;
}
long long sumrecursion(long long *arr,long long n)
{
    if (n<= 0)
        return 0;
    return (sumrecursion(arr, n - 1) + arr[n - 1]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    cout<<sumFor(arr,n)<<"\n"<<sumWhile(arr,n)<<"\n"<<sumrecursion(arr,n)<<endl;
   
    return 0;
}
