#include<iostream>
using namespace std;
int Last_occu1(int *a,int n,int k)
{
	if(n==0)return -1;
	if(a[0]==k)return n-1;
	return Last_occu1(a-1,n-1,k);
}
int Last_occu2(int *a,int n,int k,int i)
{
	if(n==0)return -1;
	if(a[i]==k)return i;
	return Last_occu2(a,n-1,k,i-1);
}
int main()
{1
	int a[]={1,2,5,3,5,4,5};
	int n=sizeof(a)/sizeof(int);
	int k;
	cin>>k;
	//cout<<Last_occu1(a+n-1,n,k);
	cout<<Last_occu2(a,n,k,n-1);
}
