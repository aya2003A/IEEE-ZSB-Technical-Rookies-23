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
bool isSubSequence(string s1, string s2)
{
    int s_s1 = s1.length(), s_s2 = s2.length();
    int i = 0, j = 0;
    while (i < s_s1 && j < s_s2) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    if(i == s_s1)
    return true;
    else
    return false;
}
int main()
{
    FAST
    int x;
    cin>>x;
    string a="hackerrank";
    string b;
    for(int i=0;i<x;++i)
    {
    cin>>b;
    if(isSubSequence(a,b)==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl; 
    }
    return 0;
}