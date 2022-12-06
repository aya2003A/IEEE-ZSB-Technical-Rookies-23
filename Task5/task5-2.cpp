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
int MAX = 0;
int top = -1;
char *stk = new char(MAX);
void push(char c){
    if(top == (MAX-1))
        cout << "Stack Overflow\n";
    else
    {
        top=top+1;
        stk[top] = c;
    }
}
char pop(){
    if(top == -1)
        cout << "\n Stack Underflow";
    else
        return(stk[top--]);
}

int main()
{
    FAST
    string exp;
    cin >> exp;
    MAX = exp.size();
    char temp;
    int i, flag=1;
    for(i=0;i<exp.size();i++) {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            push(exp[i]);
        if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
            if(top == -1)
                    flag=0;
            else {
                temp=pop();
            if(exp[i]==')' && (temp=='{' || temp=='['))
                flag=0;
            if(exp[i]=='}' && (temp=='(' || temp=='['))
                flag=0;
            if(exp[i]==']' && (temp=='(' || temp=='{'))
                flag=0;
            }
}
    if(top>=0)
        flag=0;
    if(flag==1)
        cout << "true";
    else
        cout << "false";

    return 0;
}
