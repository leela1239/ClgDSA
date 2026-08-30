#include<iostream>
using  namespace std;
int First_occu1(int *a,int n,int k)
{
	if(n==1)return -1;
	if(a[0]!=k)
	{
		int ind=First_occu1(a+1,n-1,k);
		if(ind==-1)return -1;
		return ind+1;
	}
	return 0;
}
int First_occu2(int *a,int n,int k,int i)
{

	if(i==n)return -1;
	if(a[i]==k)return i;
	return First_occu2(a,n-1,k,i+1);
}
int main()
{
	int a[]={1,2,5,3,5,4};
	int n=sizeof(a)/sizeof(int);
	int l=sizeof(a)/sizeof(int);
	int k;
	cin>>k;
	cout<<First_occu1(a,n,k);
	cout<<"\n";
	cout<<First_occu2(a,l,k,0);
}
