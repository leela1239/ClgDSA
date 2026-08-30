#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,E;
	cin>>N>>E;
	vector<int>adj[N+1];
	int u,v;
	vector<int>indeg(N+1,0);
	for(int i=0;i<E;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		indeg[v]+=1;
	}
	queue<int>q;
	vector<int>res;
	for(int i=0;i<E;i++)
	{
		if(indeg[i]==0)q.push(i);
	}
	while(!q.empty())
	{
		int topo=q.front();
		q.pop();
		for(auto it:adj[topo])
		{
			indeg[it]--;
			if(indeg[it]==0)q.push(it);
		}
		res.push_back(topo);
	}
	for(auto it:res)
	{
		cout<<it<<" ";
	}
}