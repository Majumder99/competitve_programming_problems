#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void divisor(ll l,ll r)
{
    ll i,j,k=0,div,minn=0;
    for(j=l; j<=r; j++)
    {
        div=0;
        for(i=1; i*i<=j; i++)
        {
            if(i*i==j)
            {
                div++;
            }
            else if(j%i==0)
            {
                div+=2;
            }
        }
        if(div>minn)
        {
            minn=div;
            k=j;
        }
    }
    cout<<"Between "<<l<<" and "<<r<<", "<<k<<" has a maximum of "<<minn<<" divisors."<< endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll t,n,k,l,r;
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        divisor(l,r);
    }
    return 0;
}
