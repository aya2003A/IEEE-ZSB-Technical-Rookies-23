#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
 node *start = NULL;
 node *tail = NULL;
 node *start2 = NULL;
node *create_ll(node *)
{
node *new_node, *ptr;
int num;
cin>>num;
while(num!=-1)
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
    ptr=ptr->next;
 ptr->next = new_node;
 new_node->next=NULL;
 tail=ptr->next;
 }
cin>>num;
}
return start;
}

node *create_ll2(node *)
{
node *new_node, *ptr;
int num;
cin>>num;
while(num!=-1)
{
new_node =new node;
new_node -> data=num;
if(start2==NULL)
{
new_node -> next = NULL;
start2 = new_node;
}
else
{
ptr=start2;

 while(ptr->next!=NULL)
    ptr=ptr->next;
 ptr->next = new_node;
 new_node->next=NULL;
 }

cin>>num;
}
return start2;
}
struct node *display(struct  node *start)
{
struct node *ptr;
ptr = start;
while(ptr != NULL)
{
 cout<< "\t"<<ptr -> data;
 ptr = ptr -> next;
}
return start;
}
node *merge(node *start,node* start2)
{
 tail -> next = start2;
    return start;
}
node *sort_list(struct node *start)
{
struct node *ptr1, *ptr2;
int temp;
ptr1 = start;
while(ptr1 -> next != NULL)
{
 ptr2 = ptr1 -> next;
 while(ptr2 != NULL)
 {
 if(ptr1 -> data > ptr2 -> data)
 {
 temp = ptr1 -> data;
 ptr1 -> data = ptr2 -> data;
 ptr2 -> data = temp;
 }
 ptr2 = ptr2 -> next;
 }
 ptr1 = ptr1 -> next;

 }
return start;
}

int main()
{
    start = create_ll(start);
    start2= create_ll2(start2);
    if(start==NULL && start2!=NULL)
    {
    sort_list(start2);
    display(start2); 
    }
    else if(start!=NULL && start2==NULL)
    {
    sort_list(start);
    display(start); 
    }
    else 
    {
    merge(start,start2);
    sort_list(start);
    display(start);}
    return 0;
}
