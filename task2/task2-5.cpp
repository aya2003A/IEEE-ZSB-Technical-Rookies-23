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
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i)
    {
        cin>>arr[i];
    }
int i, j, temp;
for(i=1;i<size;i++)
{
 temp = arr[i];
 j = i-1;
 while((temp < arr[j]) && (j>=0))
 {
 arr[j+1] = arr[j];
j--;
 }
 arr[j+1] = temp;
}
 for(int i=0;i<size;++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
