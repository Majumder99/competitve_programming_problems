#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll P(ll n,ll m)
{
    ll r=1;
    for(ll i=0; i<m; i++)
    {
        r=r*(n-i);
        r=r/(i+1);
    }
    return r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll m,n,i,j,k,l,t,ans=0;
    cin >> n >> m >> t;
    for(i=4; i<t; i++)
    {
        ans+=P(n,i)*P(m,t-i);
    }
    cout << ans << endl;
    return 0;
}
