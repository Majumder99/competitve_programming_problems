#include<bits/stdc++.h>
using ll = long long int;
using namespace std;
ll GCD(ll a,ll b)
{
    ll x,y,rem=0;
    x=a;
    y=b;
    while(y!=0)
    {
        rem=x%y;
        x=y;
        y=rem;
    }
    return x;
}
ll LCM(ll a,ll b)
{
    ll l,m,n;
    l=GCD(a,b);
    m=(a*b)/l;
    return m;
}
int main()
{
    ll t,n,a,b,h,j,gcd,lcm;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        gcd=GCD(a,b);
        lcm=LCM(a,b);
        if(gcd!=a&&lcm!=b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << gcd << " " << lcm << endl;
        }
    }
    return 0;
}
