#include<bits/stdc++.h>
using namespace std;
int prims(int n, vector<vector<int>>&e, int s) {
    vector<int>res;
    vector<int>vis(n,0);
    int wt=0;
    vector<pair<int,int>>adj[n];
    for(auto it:e)
    {
        int u=it[0];
        int v=it[1];
        int w=it[2];
        adj[u].push_back({v,w});
        
    }
    for(auto it:adj)
    {
        for(auto i:it)
        {
            cout<<i.first<<" "<<i.second<<" ";
        }
        cout<<"\n";
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
    p.push({0,s});
    while(!p.empty())
    {
        auto t=p.top();
        p.pop();
        if(vis[t.second]==0)
        {
            for(auto it:adj[t.second])
            {
                p.push({it.second,it.first});
            }
        }
         cout<<"v="<<vis[t.second]<<" ";
        if(vis[t.second]!=1)wt+=t.first;
        vis[t.second]=1;
        cout<<"t="<<" "<<t.second<<" ";
        cout<<"v="<<vis[t.second]<<" ";
        cout<<"w="<<t.first<<"\n";
        //wt+=t.first;
    }
    return wt;
    
}
int main()
{
    vector<vector<int>>e={{1,2,2},{2,3,2},{1,3,3}};
    cout<<prims(3,e,1);

}