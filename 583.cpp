#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void primeFactors(ll n)
{
    ll k;
    k=n;
    vector<ll>v;
    if(n<0)
    {
        v.push_back(-1);
    }
    n=abs(n);
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (ll i = 3; i * i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        v.push_back(n);
    cout << k << " = ";
    for(ll i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
        if(i<v.size()-1)
        {
            cout << "x" << " ";
        }
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n ;
    while(cin >> n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            primeFactors(n);
        }
    }
    return 0;
}
