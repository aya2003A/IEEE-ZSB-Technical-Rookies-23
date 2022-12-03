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
struct student
{
    long long a;
    long long b;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    long long num,remaining=0,volume=0;
    cin>>num;
    student arr[num];
    for(int i=0;i<num;++i)
    {
      long long aa,bb;
      cin>>aa>>bb;
      arr[i].a=aa;
      arr[i].b=bb;
      remaining+=aa;
    }
   int i, j;
   student temp;
   for(i=1;i<num;i++)
   {
   temp = arr[i];
   j = i-1;
   while((temp.b< arr[j].b) && (j>=0))
   {
   arr[j+1] = arr[j];
   j--;
   }
   arr[j+1] = temp;
   }
   volume=arr[num-1].b+arr[num-2].b;
   if(remaining<volume)
   cout<<"Yes";
   else
   cout<<"No";
    return 0;
}
