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
void DFS(int node,vector<int>adj[],vector<int>&vis)
{
	vis[node]=1;
	cout<<node<<" ";
	for(auto it:adj[node])
	{
		if(!vis[it])
		{
			DFS(it,adj,vis);
		}
	}
}
int main()
{
	int N,E;
	cin>>N>>E;
	vector<int>adj[N+1];
	int u,v;
	vector<int>indeg(N+1,0);
	vector<int>outdeg(N+1,0);
	for(int i=0;i<E;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		outdeg[u]+=1;
		indeg[v]+=1;
	}
	vector<int>vis(N+1,0);
	int c=0;
	cout<<"BFS: \n";
	//BFS(1,adj,vis);
	for(int i=1;i<N+1;i++)
	{
		c+=1;
		if(!vis[i])
		{
			BFS(i,adj,vis);
		}
	}
	vector<int>vis1(N+1,0);
	//DFS(1,adj,vis1);
	cout<<"\n";
	cout<<"DFS: \n";
	for(int i=1;i<N+1;i++)
	{
		if(!vis1[i])
		{
			DFS(i,adj,vis1);
		}
	}
	cout<<"\n";
	cout<<"No.of Components="<<c<<"\n";
	cout<<"OUTDEGREES: \n";
	for(int i=1;i<outdeg.size();i++)
	{
		cout<<i<<"->"<<outdeg[i]<<"\n";
	}
	cout<<"INDEGREES: \n";
	for(int i=1;i<indeg.size();i++)
	{
		cout<<i<<"->"<<indeg[i]<<"\n";
	}
}



