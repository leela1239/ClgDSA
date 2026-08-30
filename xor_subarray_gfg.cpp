    #include<bits/stdc++.h>
    using namespace std;
    void specialXor(int n, int Q, int a[], vector<int> q[])
    {
        int p[n]={0},r[n]={0};
        p[0]=a[0];
        r[n-1]=a[n-1];
        vector<int>v;
        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]^a[i];
            r[n-1]=r[n-i]^a[n-i-1];
        }

        int x,y;
        for(int i=0;i<Q;q++)
        {
            q[i][0]=x;
            q[i][1]=y;
            cout<<(p[x]^r[y]);
        }
       
    }
    int main()
    {
        int n=10,Q=3;
        int a[10]={4,7,8,5,9,6,1,0,20,10};
        vector<int>q[Q]={{3,8},{1,6},{2,3}};
        specialXor(n,Q,a,q);
    }