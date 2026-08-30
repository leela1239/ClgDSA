//Using Prefix Sum Algo
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int q;
	cin>>q;
	int s[n+1]={0};
	for(int i=0;i<q;i++)
	{
		int l,r,k;
		cin>>l>>r>>k;
		s[l]+=k;
		s[r+1]-=k;
	}
	for(int i=1;i<n;i++)
	{
		s[i]=s[i-1]+s[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]+s[i]<<" ";
	}
}
//Brute Force
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int l,r,k;
		cin>>l>>r>>k;
		for(int j=l;j<=r;j++)
		{
			a[i]+=k;
		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
