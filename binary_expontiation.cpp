#include<bits/stdc++.h>
using namespace std;
int BE(int a,int exp)
{
	if(exp==0)return 1;
	int res=BE(a,exp/2);
	if(exp%2==0)return res*res;
	else return res*res*a;
}
int main()
{
	int b,exp;
	cin>>b>>exp;
	cout<<BE(b,exp)<<"\n";
	int res=1;
	while(exp)
	{
		if(exp%2==0)
		{
			exp/=2;
			b*=b;
		}
		else
		{
			exp--;
			res*=b;
		}
	}
	cout<<res;
}