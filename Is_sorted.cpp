#include<iostream>
is_sorted1(int *a,int n,int i)
{
	if(i==n-1)return 1;
	if(a[i]<=a[i+1])return is_sorted1(a,n,i+1);
	return -1;
}
is_sorted2(int *a,int n)
{
	if(n==1)return 1;
	if(a[0]<=a[1])return is_sorted2(a+1,n-1);
	return -1;
	
}
using namespace std;
int main()
{
	int a[]={1,2,27,39,45};
	int n=sizeof(a)/sizeof(int);
	cout<<is_sorted1(a,n,0);
	cout<<"\n";
	cout<<is_sorted2(a,n);
}
