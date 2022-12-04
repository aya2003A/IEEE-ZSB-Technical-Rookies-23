#include <iostream>
#include <conio.h>
#include <iomanip>
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
    int num,counter=0;
    cin>>num;
    while(num!=6174)
    {
        if(num==0)
        break;
       int arr[4];
       int n=num;
       for(int i=0;i<4;++i)
       {
          arr[i]=n%10;
          n/=10;
       }
       sort(arr,arr+4);
       int number_asec=0,number_desc=0;
       for(int i=0;i<4;++i)
       {
           number_asec=number_asec*10+arr[i];
       }
        for(int i=3;i>=0;--i)
       {
           number_desc=number_desc*10+arr[i];
       }
       num=abs(number_desc-number_asec);
       ++counter; 
    }
    cout<<counter;
    return 0;
}
