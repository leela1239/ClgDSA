#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>adj[],vector<int>&vis)
{
	vis[node]=1;
	cout<<node<<" ";
	for(auto it:adj[node])
	{
		if(!vis[it])
		{
			dfs(it,adj,vis);
		}
	}

}
int main()
{
	int N,E;
	cin>>N>>E;
	vector<int>adj[N+1];
	int u,v;
	for(int i=0;i<E;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int>vis(N+1,0);
	//dfs(1,adj,vis);
	for(int i=0;i<N+1;i++)
	{
		if(!vis[i])
		{
			dfs(i,adj,vis);
		}
	}
}