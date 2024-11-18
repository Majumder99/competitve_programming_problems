/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll gcd(ll a,ll b)
{
    ll x,y,rem=0;
    if(a<b)
    {
        x=b;
        y=a;
    }
    else
    {
        x=a;
        y=b;
    }
    while(y!=0)
    {
        rem=x%y;
        x=y;
        y=rem;
    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,i,j,t,mx=0;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> n;
        n=floor(n/2.0);
        a=n;
        b=2*n;
        cout << gcd(a,b) << endl;
        n=0;
    }
    return 0;
}

