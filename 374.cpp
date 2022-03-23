#include<bits/stdc++.h>
using ll=long long;
using namespace std;
ll BigMod(ll x,ll y,ll c)
{
    if(y==0)
    {
        return 1;
    }
    if(y%2==0)
    {
        ll f=BigMod(x,y/2,c);
        return (f*f)%c;
    }
    else if(y%2==1)
    {
        ll g=x%c;
        ll o=BigMod(x,y-1,c);
        return (g*o)%c;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll R,B,P,M;
    while(cin>>B>>P>>M)
    {
        cout << BigMod(B,P,M) << endl;
    }
    return 0;
}
