#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int b[32]={0};
	int a[32]={0};
	int j=0;
	cout<<"hai";
	for(int i=31;i>=0;i--)
	{
		b[i]=(n>>i)&1;
		a[j]=b[i];
		j+=1;
	}
	for(int i=31;i>=0;i--)
	{
		cout<<b[i]^a[i];
	}

	
}
