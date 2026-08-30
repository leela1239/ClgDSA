#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll find(ll n,ll ind,ll h[],vector<ll>&dp)
{
    ll ans1=INT_MAX,ans2=INT_MAX;
    if(dp[ind]!=-1)return dp[ind];
	if(ind==n-1 or ind>=n)return 0;
	ans1=abs(h[ind]-h[ind+1])+find(n,ind+1,h,dp);
	if(ind<n-2)ans2=abs(h[ind]-h[ind+2])+find(n,ind+2,h,dp);
	return dp[ind]=min(ans1,ans2);
}
int main()
{
	ll n;
	cin>>n;
	ll h[n];
	for(ll i=0;i<n;i++)
	{
		cin>>h[i];
	}
	ll j=0;
	vector<ll>dp(n+1,-1);
	cout<<find(n,j,h,dp);

}