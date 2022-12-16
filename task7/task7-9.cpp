#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int x,a,b,c,d;
    cin>>x;
    int i = x+1;
   while(true){
      a = i/1000;
      b = i/100 % 10;
      c = i/10 % 10;
      d = i%10;
     if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        break;
     }
     ++i;
   }
   cout<<i;
    return 0;
}
