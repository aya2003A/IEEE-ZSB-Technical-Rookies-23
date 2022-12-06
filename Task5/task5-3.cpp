#include <iostream>
#include <conio.h>
#include <iomanip>
#include<bits/stdc++.h>
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
long long powsum(long long x){
    ll s = 0;
    while(x != 0){
        s += pow(x%10,2);
        x /= 10;
    }
    return s;
}
int main()
{
    FAST
    long long x;
    cin >> x;
    while(x != 1 && x > 0){
        x = powsum(x);
        if(x == 37)
            break;

    }
    if(x == 1)
        cout <<"true";
    else
        cout << "false";
    return 0;
}
