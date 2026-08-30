#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	cin>>n;
	cin>>s;
	int a[n];
	int m=1e9+7;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int>dp(s+1,0);
	dp[0]=1;
	for(int i=1;i<=s;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i-a[j]>=0)
			{
				dp[i]+=dp[i-a[j]];
				dp[i]%=m;
			}
		}
	}
	cout<<dp[s];
}