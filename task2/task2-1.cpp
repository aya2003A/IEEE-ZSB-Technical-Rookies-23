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
bool find(int searchIn,int b)
{
    for(int i=1;i<=3;++i)
    {
        if(searchIn%10==b)
           return true;
        else
          searchIn/=10;
    }
    return false;
}
bool index(int searchIn,int b,int i)
{
    int digit = (searchIn / (int) pow(10, i)) % 10;
    if(digit==b)
    return true;
    else
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    int random=rand()%1000;
    cout<<"random"<<random<<endl;
    int enter;
    cin>>enter;
    while(enter!=random)
    {
        int hit=0,miss=0;
        for(int i=0;i<3;++i)
        {
        int a=enter%10;
        if(find(random,a)==true &&index(random,a,i)==true)
         ++hit;
        if(find(random,a)==true && index(random,a,i)!=true)
         ++miss;
         enter/=10;  
        }
        cout<<hit<<" hit "<<miss<<" miss "<<endl;
        cin>>enter;
    }
    return 0;
}
