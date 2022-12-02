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
    string str;
    string word="hello";
    cin>>str;
    int j=0;
        for(int i=0;i<str.size();i++)
		{
            if(word[j]==str[i])
            j++;
        }
    if(j==word.size())
    cout<<"YES";
    else
    cout<<"No";
    return 0;
}
