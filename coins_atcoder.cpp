#include<bits/stdc++.h>
using namespace std;
float prob(int i,int n,float p[])
{
	float ans=0.0;
	for(int i=0;i<n;i++)
	{
		ans=max(ans,p[i]*prob(i,n,p));
		ans=max(ans,(1-p[i])*prob(i,n,p));

	}
	cout<<ans;
	return ans;
}
int main()
{
	int n;
	cin>>n;
	float p[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<prob(0,n,p);

}