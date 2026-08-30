#include<bits/stdc++.h>
using namespace std;
void stempty(stack<int>&st)
{
	if(st.empty())return;
	int x=st.pop();
	stempty(st);
	stbuild(st,x);
}
void stbuild(stack<int>&st,int x)
{
	if(st.empty())st.push(x);
	else if(st.top()<x)st.push(x);
	else
	{
		while(!st.empty() && st.top()<x)
		{
			int t=st.pop();
		}
		stbuild(st,x);
	}
}
int main()
{
	stack<int>st;
	st.push(10);
	st.push(2);
	st.push(-4);
	st.push(30);
	stempty(st);
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
}
