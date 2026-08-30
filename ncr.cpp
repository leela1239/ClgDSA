#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fact[1001];
ll invfact[1001];
ll mod=1e9+7;
ll power(ll a,ll b)
{
	if(b==0)return 1;
	ll x=power(a,b/2);
	if(b%2) return (x%mod * x%mod *a%mod)%mod;
	else return (x*x)%mod;
}
ll inverse(ll x)
{
	return power(x,mod-2);
}
void compute_factorial()
{
	if(fact[1]==1)return ;
	fact[0]=1;
	invfact[0]=1;
	for(ll i=1;i<1001;i++)
	{
		fact[i]=(i%mod*fact[i-1]%mod)%mod;
		invfact[i]=inverse(fact[i]%mod);
	}
}
int main()
{
	ll n,r;
	cin>>n>>r;
	compute_factorial();
	if(r>n)return 0;
	ll num=fact[n];
	ll den=(invfact[n-r]%mod*invfact[r]%mod)%mod;
	ll ans=(num%mod*den%mod)%mod;
	cout<<ans;

}