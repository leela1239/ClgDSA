#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int fun(ll n,ll a[],ll m)
{
	ll c,s,r,res=1;
	for(ll i=0;i<n;i++)
	{
	    s=0;
		if(a[i]==0)
		{
		    c=0;
    		if(i==0) s+=a[i+1];
    		else if(i==n-1) s+=a[i-1];
    		else
    		{
    			s+=a[i-1];
    			s+=a[i+1];
    		}
    		if(s%2==0)
    		{
    			r=s/2;
    			if(r<=m and r>0)c+=1;
    			if(r-1<=m and r-1>0)c+=1;
    			if(r+1<=m and r+1>0)c+=1;
    		}
    		else
    		{
    			r=(s+1)/2;
    			if(r<=m and r-1>0)c+=1;
    			if(r+1<=m and r+1>0)c+=1;
    		}
            res*=c;
		}
	}
	return res;

}
int main()
{
	ll n;
	ll m;
	cin>>n;
	cin>>m;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<fun(n,a,m);
}