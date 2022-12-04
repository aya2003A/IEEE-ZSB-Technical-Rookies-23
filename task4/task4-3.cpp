#include <iostream>
#include <conio.h>
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
    vector<int>vec ;
            int num;
    while(cin>>num)
    {
        vec.push_back(num);
    }
    int min_distance=INT_MAX,distance=0;
    for(int i=0;i<vec.size();++i)
    {
        int first=vec[i];
        for(int j=i+1;j<vec.size();++j)
        {
            if(first==vec[j])
            {
                distance=abs(i-j);
                if(distance<min_distance)
                min_distance=distance;
            }
        }
    }
    cout<<min_distance<<endl;
    return 0;
}
