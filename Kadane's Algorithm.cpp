/*
Kadane's Algorithm : Time Complexity: O(n)
 
 --> Used to find the maximum subarray sum.

 --> When the array contains negative numbers then go with Kadanes's Algorithm.

 Approach:

 --> Take two different variab;es to store the sum.

 --> Let's take s=0,res where s is the sum of the subarray and res stores the max sum.

 -->If all the array elements are negative then the max sum is negative. So consider res=INT_MIN .

--> Add the array elements to s and update the res with max(res,s).the

-->If s<0 then make s=0 , i.e; leaving the subarray calculated till now as it resulted with a negative sum.

--> Note: 

	Before modifying s we must compare res and s store the max bkz in terms of all -ve numbers the s is always negative.
	Even we changed s to 0 , as it is compared before the max sum will be present in res. i.e; no loss of the max sum.

-->Reference Link: https://www.scaler.com/topics/kadanes-algorithm/

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll res=INT_MIN;
	ll s=0;
	for(ll i=0;i<n;i++)
	{
		s+=a[i];
		res=max(res,s);  // storing the max s in res
		if(s<0) s=0;    // resetting the s value to 0.
	}
	cout<<res;
}