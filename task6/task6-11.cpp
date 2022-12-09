#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
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
    FAST
   long long n,t;
    cin >> n >> t;
    long long a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    long long sum = 0;
    long long res = 0;
    for(int i=0; i<n; i++){
        if(sum < t){
            res++;
        sum += 86400 - a[i];
        }
    }
    cout << res << endl;
    return 0;
}