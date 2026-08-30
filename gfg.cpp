#include<bits/stdc++.h>
using namespace std;
    long long int  reversedBits(long long int n) {
        long long int r=0;
        int b[32]={0},j;
        for(int i=31;i>=0;i--)
        {
            if((n>>i)&1)
            {
                j=32-i-1;
                b[j]=1;
            }
            cout<<b[j]<<" ";
        }
        cout<<"\n";
        for(int i=31;i>=0;i--)
        {
            if(b[i]==1) 
            {
                r+=pow(2,i);
            }
            cout<<"r="<<r<<"\n";
        }
        return (2*r)+1;
    }
int main()
{
    long long int n;
    cin>>n;
    cout<<reversedBits(n);
}
//4294967295