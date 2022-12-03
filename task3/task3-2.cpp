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
    string name;
    double grade;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    int num;
    cin>>num;
    student arr[num];
    for(int i=0;i<num;++i)
    {
      string s; double g;
      cin>>s>>g;
      arr[i].name=s;
      arr[i].grade=g;
    }
   int i, j;
   student temp;
   for(i=1;i<num;i++)
   {
   temp = arr[i];
   j = i-1;
   while((temp.grade < arr[j].grade) && (j>=0))
   {
   arr[j+1] = arr[j];
   j--;
   }
   arr[j+1] = temp;
   }
   int index=1;
   double n=arr[index].grade;
   while(arr[index].grade==n)
   {
       cout<<arr[index].name<<endl;
       ++index;
   }
    return 0;
}
