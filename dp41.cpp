#include<iostream>
using namespace std;
int main()
{
	int d,n=27,c=0;
	while(n>0)
	{
		cout<<n<<" ";
		d=n%10;
		if(d!=0)
		{
			n=n-d;
		}
		else
		{
			n=n/10;
		}
		c+=1;
	}
	cout<<c;
}