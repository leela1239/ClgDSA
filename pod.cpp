#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<char>t{'A', 'A', 'A', 'A', 'A', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};

	int k=2;
	vector<int>v(26,0);
        for(auto it:t)
        {
            int r=65-int(it);
            v[r]++;
        }
        for(auto it:v)
        {
        	cout<<it<<" ";
        }
        int m=*max_element(v.begin(),v.end());
        cout<<m<<"\n";
        int res=((m-1)*k)-(12-m);
        cout<<"\n"<<res+m;
}