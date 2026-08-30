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
void BFS(int node,vector<int>adj[],vector<int>&vis)
{
	queue<int>q;
	q.push(node);
	vis[node]=1;
	while(!q.empty())
	{
		node=q.front();
		cout<<node<<" ";
		q.pop();
		for(auto it:adj[node])
		{
			if(!vis[it])
			{
				q.push(it);
				vis[it]=1;
			}
		}

	}
}
int main()
{
	int N,E;
	cin>>N>>E;
	int g[N+1][N+1];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			g[i][j]=0;
		}
		cout<<"\n";
	}
	int u,v;
	/*for(int i=0;i<E;i++)
	{
		cin>>u>>v;
		g[u][v]=1;
		g[v][u]=1;
	}*/
	/*for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<g[i][j]<<" ";
		}
		cout<<"\n";
	}*/
	vector<int>adj[N+1];
	//int u,v;
	for(int i=0;i<E;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
/*	for(auto it:adj)
	{
		for(auto i:it)
		{
			cout<<i<<" ";
		}
	}*/
	vector<int>vis(N+1,0);
	//dfs(1,adj,vis);
	BFS(1,adj,vis);
	/*for(int i=0;i<N+1;i++)
	{
		if(!vis[i])
		{
			dfs(i,adj,vis);
		}
	}*/
}



