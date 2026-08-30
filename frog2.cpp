#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll find(ll n,ll k,ll ind,ll h[],vector<ll>&dp)
{
    ll ans=INT_MAX;
    if(dp[ind]!=-1)return dp[ind];
	if(ind>=n-1)return 0;
	for(ll i=1;i<=k;i++)
	{
	    if(ind<n-i)
	    {
	        ans=min(ans,abs(h[ind]-h[ind+i])+find(n,k,ind+i,h,dp));
	    }
	}
	return dp[ind]=ans;
}
int main()
{
	ll n;
	cin>>n;
	ll k;
	cin>>k;
	ll h[n];
	for(ll i=0;i<n;i++)
	{
		cin>>h[i];
	}
	ll j=0;
	vector<ll>dp(n+1,-1);
	cout<<find(n,k,j,h,dp);

}