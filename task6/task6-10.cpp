#include <bits/stdc++.h>

using namespace std;
void arrange(int arr[], int n, int x)
{
	int i, j;
 
	if(x==n)
		return;
	for(j=x; j<=n-1; j++)
		arr[j]=	arr[j+1];
}

int main()
{

	int T;
	cin>>T;
	while(T--)
	{
		int n, k;
		cin>>n>>k;
		int arr[n+1], i, count=0, temp=0;
 
		for(i=1; i<=n; i++)
			cin>>arr[i];
 
		for(i=1; i<=n-1; i++)
		{
			if(arr[i]<arr[i+1])
			{
				arr[i]=-1;
				arrange(arr, n, i);
				--n;
				count++;
				temp++;
			}
			if(count==k)
				break;
			if(i==n-1)
			{
				if(count<k  && temp!=0)
				{
					temp=0;
					i=0;
				}
				else
					break;
			}
		}
		while(count!=k)
			--n;
		for(i=1; i<=n; i++)
			cout<<arr[i]<<" ";
	cout<<"\n";
	}
 
	return 0;
}

