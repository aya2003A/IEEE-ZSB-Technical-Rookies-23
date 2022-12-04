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

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}

int main()
{
   
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    vector<pair<int,int>>vec ;
    int num,many;
    cin>>num>>many;
    int arr[num];
    for(int i=0;i<num;++i)
    {
        cin>>arr[i];
    }
    sort(arr, arr + num);
    int count=0;
    for(int i=0;i<num;)
    {
        int frequency=arr[i],count=0;
        while(frequency==arr[i])
              {
                  ++count;
                  ++i;
              }
        vec.push_back(make_pair(arr[i-1],count));
    }
    sort(vec.begin(), vec.end(), sortbysecdesc);
    for(int i=0;i<many;++i)
    {
        cout<<vec[i].first<<" ";
    }
    return 0;
}
