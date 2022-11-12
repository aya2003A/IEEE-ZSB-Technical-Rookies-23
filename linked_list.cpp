#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<algorithm>
#define ll long long
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;
struct node
{
    int data;
    node* next;
};

node *start = NULL;
node *create_node(node *start)
{
node *new_node, *ptr;
int num;
cin>>num;
while(num!=00)
{
new_node =new node;
new_node -> data=num;
if(start==NULL)
{
new_node -> next = NULL;
start = new_node;
}
else
{
ptr=start;

while(ptr->next!=NULL)
    {ptr=ptr->next;}
 ptr->next = new_node;
 new_node->next=NULL;
 }
cin>>num;
}
return start;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    cout<<"enter yout list elements , to exit write 00"<<endl;
    start=create_node(start);
    return 0;
}
