#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll s=0;
	ll r=(n*(n+1))/2;
	for(ll i=0;i<n-1;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	cout<<r-s;


}