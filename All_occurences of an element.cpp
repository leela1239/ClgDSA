#include<iostream>
using namespace std;
int occu(int *a,int n,int k,int *o,int i,int j)
{
	if(i>=n)return j;
	if(a[i]==k)
	{
		o[j]=i;
		return occu(a,n,k,o,i+1,j+1);
	}
	return occu(a,n,k,o,i+1,j);
}
int main()
{
	int a[]={1,2,5,3,5};
	int n=sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	int o[100]={0};
	int size=occu(a,n,key,o,0,0);
	if(size==0)
	{
		cout<<-1;
	}
	else
	{
		for(int j=0;j<size;j++)
		{
			cout<<o[j]<<" ";
		}
	}

}
