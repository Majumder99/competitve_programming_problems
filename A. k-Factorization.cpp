#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve(ll n,ll k)
{
    vector<ll>Sourav;
    ll i,j,m;
    m=n;
    while(n%2==0)
    {
        Sourav.push_back(2);
        n=n/2;
    }
    for(i=3; i<=m; i+=2)
    {
        while(n%i==0)
        {
            Sourav.push_back(i);
            n=n/i;
        }
    }

    if(Sourav.size()<k)
    {
        cout << -1 << endl;
        return;
    }
    if(n>2)
    {
        Sourav.push_back(n);
    }
    for(i=0; i<k-1; i++)
    {
        cout << Sourav[i] << " ";
    }
    ll a=1;
    for(i=k-1; i<Sourav.size(); i++)
    {
        a*=Sourav[i];
    }
    cout << a << endl;
}
int main()
{
    ll n,k;
    cin >> n >> k;
    solve(n,k);
    return 0;
}
