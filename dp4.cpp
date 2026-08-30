#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void find(int n,ll c[],ll x,vector<ll>dp)
{
	if(x==0)
	{
		return 1;
	}
	if(dp[x]!=-1)return dp[x];
	for(int i=0;i<n;i++)
	{
		if(x-c[i]>=0)
		{
			//pick call
			ans+=find(n,c,x-c[i],dp);
			//non-pick call
			ans+=find(n,c,x,dp);
		}
	}
	return dp[x]=ans;
}
int main()
{
	int n;
	cin>>n;
	ll x;
	cin>>x;
	ll c[n];
	ll m=1e9+7;
	for(int i=0;i<n;i++) cin>>c[i];
	vector<ll>dp(10000001,-1);
	cout<<find(n,c,x,dp);
}