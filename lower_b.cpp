#include<bits/stdc++.h>
using namespace std;
int find_lb(int a[],int n,int k)
{
	int i=0,j=n-1,m,r;
	while(i<=j)
	{
		m=(i+j)>>1;
		if(a[m]==k)
		{
			j=m-1;
		}
		else if(a[m]>k)
		{
			j=m-1;
		}
		else
		{
			i=m+1;
		}
	}
	return i;
}
int find_hb(int a[],int n,int k)
{
	int i=0,j=n-1,m,r;
	while(i<=j)
	{
		m=(i+j)>>1;
		if(a[m]==k)
		{
			i=m+1;
		}
		else if(a[m]>k)
		{
			j=m-1;
		}
		else
		{
			i=m+1;
		}
	}
	return j;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<find_lb(a,n,k)<<endl;
	cout<<find_hb(a,n,k);
}