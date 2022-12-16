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
    int num;
    cin>>num;
    vector<pair<float,string>>vec;
    for(int i=0;i<num;++i)
    {
      string s; double g;
      cin>>s>>g;
      vec.push_back(make_pair(g,s));
    }
    sort(vec.begin(),vec.end());
    float smallest = vec[0].first;
    int index=0;
    float sec_smallest = INT_MAX;
   for (int i=1; i < num; i++){
      if(vec[i].first != smallest && vec[i].first < sec_smallest)
        {sec_smallest = vec[i].first;  index=i;}
   }
   while(true)
   {
       if(vec[index].first==sec_smallest)
       {cout<<vec[index].second<<endl;
       ++index;}
       else
       break;
   }
    return 0;
}