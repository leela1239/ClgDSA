#include<bits/stdc++.h>
using namespace std;
void GenParenthesis(int n,int o,int c,string str,vector<string>&r)
{
	if(o==n and c==n)
	{
		r.push_back(str);
		return;
	}
	if(o<n)
	{
		str+='(';
		GenParenthesis(n,o+1,c,str,r);
		str.pop_back();
	}
	if(o>c)
	{
		str+=')';
		GenParenthesis(n,o,c+1,str,r);
		str.pop_back();
	}
}
int main()
{
	int n;
	cin>>n;
	vector<string>r;
    string s="";
    GenParenthesis(n,0,0,s,r);
    for(auto it:r)
    {
    	cout<<it<<"\n";
    }
}

