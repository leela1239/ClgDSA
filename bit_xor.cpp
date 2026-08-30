#include<bits/stdc++.h>
using namespace std;
int findsetbit(int x)
{
	int i=0;
	while(x)
	{
		if(x&(1<<i))return i;
		else i++;
	}
	return 0;
}
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	int x=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		x=x^a[i];
	}
	int ind=findsetbit(x);
	int g1=0,g2=0;
	for(i=0;i<n;i++)
	{
		if(a[i]&(1<<ind))g1^=a[i];
		else g2^=a[i];
	}
	cout<<g1<<" "<<g2;
}