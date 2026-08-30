#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int ifprime(ll n)
{
    if(n<=1)return 0;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n;
        int c=0;
        if(n<=3)cout<<-1;
        else
        {
            for(ll i=1;i<=sqrt(n);i++)
            {
                if(n%i==0 && ifprime(i)==1 && ifprime(n-i)==1)
                {
                    c=1;
                    a=i;
                    b=n-i;
                    break;
                    
                }
            }
        if(c==1)
        {
            ll d=b+1,h=1;
            for(ll i=1;i<=a;i++)
            {
                cout<<d<<" ";
                d+=1;
            }
            for(ll i=1;i<=b;i++)
            {
                cout<<i<<" ";
            }
        }
        else cout<<-1;
        
        }
        cout<<"\n";
    }

}
