#include <bits/stdc++.h>

using namespace std;

int main() {
  
    int n,k,q;
    cin>>n>>k>>q;
    int arr[n];
    int temp[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;++i)
    {
        if((i+k)<n)
        temp[i+k]=arr[i];
        else
        {
            if(i+k<10)
            temp[i+1-k]=arr[i];
            else
            temp[(i+k)%n]=arr[i];
        }
    }
    for(int i=0;i<q;++i)
    {
        int a;
        cin>>a;
        cout<<temp[a]<<endl;
    }
    return 0;
}
