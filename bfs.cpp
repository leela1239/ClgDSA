#include<bits/stdc++.h>
using namespace std;
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
	vector<int>adj[N+1];
	int u,v;
	vector<int>deg(N+1,0);
	for(int i=0;i<E;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		deg[u]+=1;
		adj[v].push_back(u);
		deg[v]+=1;
	}
	vector<int>vis(N+1,0);
	//BFS(1,adj,vis);
	for(int i=1;i<N+1;i++)
	{
		if(!vis[i])
		{
			BFS(i,adj,vis);
		}
	}
	cout<<"\n";
	for(int i=1;i<deg.size();i++)
	{
		cout<<deg[i]<<" ";
	}

}
