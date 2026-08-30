#include<bits/stdc++.h>
using namespace std;
void subsets(int i,int *a,int n,vector<int>&ds)
{
	if(i==n)
	{
		for(auto it:ds)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
		return;
	}
	//pick call
	ds.push_back(a[i]);
	subsets(i+1,a,n,ds);
	ds.pop_back();
	//non-pick call
	subsets(i+1,a,n,ds);
}
int main()
{
	int a[]={1,2,3};
	int n=sizeof(a)/sizeof(int);
	vector<int>ds;
	subsets(0,a,n,ds);
	

}
