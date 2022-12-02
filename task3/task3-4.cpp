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
    long long book,page,fspace,bspace;
    cin>>book>>page;
    if(page==1 || page==book)
      cout<<0;
    else
    {
      if(page%2==0)
     {
          fspace=page/2;
          bspace=(book-page)/2;
     }
      
    else
    {
        --page;
         fspace=page/2;
         bspace=(book-page)/2;
    }
    if(fspace<bspace)
    cout<<fspace;
    else
    cout<<bspace;
    }
    
    return 0;
}
