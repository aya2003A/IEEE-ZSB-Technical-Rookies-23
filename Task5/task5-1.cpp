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
 void make_heap(int*arr,int i,int size)
 {
    int j, temp;
    temp = arr[i];
    j = 2 * i;
    while (j <= size)
    {
        if (j < size && arr[j+1] > arr[j])
            j = j + 1;
        if (temp > arr[j])
            break;
        else if (temp <= arr[j])
        {
            arr[j / 2] = arr[j];
            j = 2 * j;
        }
    }
    arr[j/2] = temp;
 }
int main()
{
    //81 13 77 24 35 61 48 3  23 87 92 95 74 57 99 86 28 15 55 7 51
    FAST
    int size=1;
    int *arr = new int(size);
    while(cin>>arr[size])
    {
        ++size;
    }
    for(int i = size/2; i >= 1; i--)
    {
     make_heap(arr,i,size);
    }
    for(int i=1;i<size;++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
