 int goodlength(int m,vector<vector<int>>&a)
        {
            for(int i=0;i<a.size();i++)
            {
                int c=0;
                for(int j=i;j<m;j++)
                {
                    for(int k=0;k<m;k++)
                    {
                        if(a[i][j]>=m)c+=1;
                    }
                }
                if(c==m*m)return 1;
            }
            return 0;
        }
        int find(int l,int h,vector<vector<int>>&a,vector<int>vis)
        {
            int ans=0;
            while(l<h)
            {
                int m=(l+h)/2;
                if(vis[m]!=-1)return m;
                if(goodlength(m,a)==1)
                {
                    ans=max(ans,m);
                    vis[m]=1;
                    find(m+1,h,a,vis);
                }
                else
                {
                    find(l,m-1,a,vis);
                }
            }
            return ans;
        }
        int maxGoodLength(vector<vector<int>>&a)
        {
            int n=a.size();
            int m=a[0].size();
            int r=min(n,m);
            vector<int>vis(r+1,-1);
            cout<<find(0,r,a,vis);
        }