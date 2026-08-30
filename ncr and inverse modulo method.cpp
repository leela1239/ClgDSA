#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fact[1001]={0};
ll invfact[1001]={0};
ll mod=1e9+7;
ll power(ll base,ll exp)
{
	ll res=1;
   	while(exp)
   	{
   		if(exp%2==0)
   		{
   			base=base*base;
  			exp=exp/2;
   		}
   		else
   		{
  			res*=base;
   			exp--;
   		}
   	}
  	return res;
}
ll inverse(ll x)
{
	return power(x,mod-2);
}
void compute_factorial()
{
	fact[0]=1;
	for(ll i=1;i<1001;i++)
	{
		fact[i]=i*fact[i-1];
		invfact[i]=inverse(fact[i]);
	}
}
int main()
{
	compute_factorial();
	ll n,r;
	cin>>n>>r;
	ll num=fact[n];
	ll den=invfact[n-r]*invfact[r];
	ll ans=(num%mod*den%mod)%mod;
	cout<<ans;

}