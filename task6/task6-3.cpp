#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include<string>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
#define endd "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
   int y,x,rank=1;
   cin>>y;
   vector<pair<int,int>>vec;
   for(int i=0;i<y;++i)
   {
     int a;cin>>a;
     if(i==0)
     vec.push_back(make_pair(a,rank));
     else
     {
        if(a==vec[i-1].first)
        vec.push_back(make_pair(a,vec[i-1].second));
        else
        vec.push_back(make_pair(a,++rank));
     }
   }
   cin>>x;
   int arr[x];
  for(int i=0;i<x;++i)
   {
      cin>>arr[i];
      for(int j=y-1;j>=0;--j)
      {
          if(arr[i]==vec[j].first)
              {
              arr[i]=vec[j].second;
              break;
              }
          else if(arr[i]<vec[j].first)
           {
              arr[i]=vec[j].second+1;
              break;
           }
           else if(arr[i]>vec[j].first && j==0)
           {
               arr[i]=1;
               break;
           }
      }
      cout<<arr[i]<<endl;
   }

    return 0;
}
