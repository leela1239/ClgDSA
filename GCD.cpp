/*

Finding GCD --> Greatest Common Divisor  using Eucledian Algorithm
 
We have GCD(a,b) = GCD(a,b-a)  -->b greater than a
				or
		GCD(a,b) = GCD(a-b,b)  -->a greater than b

Here the approach is to subtract the small number fron the large number.
At one point the smallest number becomes zero then answer is the other number.

EX : a=4,b=12 GCD(4,12) --> GCD(4,12-4)
						--> GCD(4,8)
						--> GCD(4,8-4)
						--> GCD(4,4)
						--> GCD(4,4-4)
						--> GCD(4,0)
						Ans: 4

Here we subtracted 4 for 3 times.

So as we are subtracting the same number for more than one time we can use modulo here.

		GCD(a,b) = GCD(a,b%a)

*/

//Code

#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
	if(b==0)return a;
	if(a>b)swap(a,b);
	return GCD(a,b%a);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<GCD(a,b); // Considering a is smaller

}