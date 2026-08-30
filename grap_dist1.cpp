#include<bits/stdc++.h>
using namespace std;
void BFS(int i,vector<int>adj[],vector<int>&vis,vector<int>&res)
    {
        queue<int>q;
        q.push(i);
        vis[i]=1;
        int a=0;
        while(!q.empty());
        {
            int t=q.front();
            q.pop();
            if(a<res[t])res[t]=a;
            for(auto it:adj[t])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it]=1;
                }
                
            }
            a+=1;
        }
    }
    int main()
    {
       int src=0,N=9,M=10;
        vector<int>adj[N];
        int u,v;
        for(int i=0;i<M;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(N,0);
        vector<int>res(N,INT_MAX);
        BFS(src,adj,vis,res);
        for(auto it:res)
        {
            cout<<it<<" ";
        }
    }