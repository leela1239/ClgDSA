#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll even(ll n)
{
	while(n%2==0)
	{
		cout<<n<<" ";
		n=n/2;
	}
	return n;
}
int main()
{
	ll n;
	cin>>n;
	while(n!=1)
	{
		if(n%2==0) n=even(n);
		else{
			cout<<n<<" ";
			n=3*n+1;
		}
	}
	cout<<n;
}