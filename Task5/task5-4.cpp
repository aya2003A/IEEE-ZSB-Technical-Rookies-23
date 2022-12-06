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

int main()
{
    FAST
    int n;
    cin >> n;
    for(int i = 2;i * i <= n;i++){
        while(n%i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if(n > 1){
        cout << n << endl;
    }
    return 0;
}
