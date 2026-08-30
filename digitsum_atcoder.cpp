#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll find(ll n,ll m)
{
	ll d,s=0;
	while(n>0)
	{
		d=n%10;
		s+=d;
		n=n/10;
	}
	if(s%m==0)return 1;
	else return 0;
}
int main()
{
	ll n;
	cin>>n;
	ll m;
	cin>>m;
	ll c=0;
	ll mod=1e9+7;
	for(int i=1;(i<=n && i<=9);i++)
	{
		if(i%m==0)
		c+=1;
	}
	if(n>9)
	{
		for(int i=10;i<=n;i++)
		{
			c+=find(i,m)%mod;
		}
	}
	cout<<c%mod;
}