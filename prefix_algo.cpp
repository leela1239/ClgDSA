/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int p[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		p[0]=a[0];
		for(int i=1;i<n;i++)
		{

			p[i]=p[i-1]+a[i];
		}
		int q;
		cin>>q;
		for(int i=0;i<q;i++)
		{
			int l,r;
			cin>>l>>r;
			l--;
			r--;
			if(l==0)cout<<p[r]<<"\n";
			else cout<<p[r]-p[l-1]<<"\n";
		}
	}

}*/
	#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int l,r,k;
		cin>>l>>r>>k;
		for(int j=l;j<=r;j++)
		{
			a[j]+=k;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}