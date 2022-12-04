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
    int arr[x][x];
    int rotate[x][x];
    for(int i=0;i<x;++i)
    {
        for(int j=0;j<x;++j)
        cin>>arr[i][j];
    }
    for (int a= 0; a <x; a++) {
    int b = 0;
    for (int c = x - 1; c >= 0; c--) {
      rotate[a][b] = arr[c][a];
      b++;
    }
    }
     for(int i=0;i<x;++i)
    {
        for(int j=0;j<x;++j)
        cout<<rotate[i][j]<<" ";
         cout<<endl;
    }
    return 0;
}
