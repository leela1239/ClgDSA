#include<bits/stdc++.h>
using namespace std;
void binrep1(int n)
{
	for(int i=7;i>=0;i--)
	{
		if(n&(1<<i)) cout<<1;
		else cout<<0;
	}
}
void binrep2(int n)
{
	for(int i=31;i>=0;i--)
	{
		cout<<((n>>i)&1);
	}
}
int main()
{
	int n;
	cin>>n;
	binrep1(n);
	cout<<"\n";
	//binrep2(n);
}
int main()
{
	for(char ch='A';ch<='D';ch++)
	{
		cout<<ch<<"--->";
		binrep1(ch);
		cout<<"\n";
	}
	for(char ch='a';ch<='d';ch++)
	{
		cout<<ch<<"--->";
		binrep1(ch);
		cout<<"\n";
	}
	//upper to lower conversion
	char c;
	cin>>c;
	c=c|(1<<5); 
	cout<<c<<"\n";
	//lower to upper conversion
	char s;
	cin>>s;
	s=s&(~(1<<5));
	cout<<s<<"\n";

}
