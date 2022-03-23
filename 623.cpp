#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define MAX 42000
ll multiply(ll x, ll res[], ll res_size);
void fact(ll n)
{
    ll res[MAX];
    res[0] = 1;
    ll res_size = 1;
    for (ll x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
    cout << n << "!\n";
    for (ll i=res_size-1; i>=0; i--)
        cout << res[i];
}
ll multiply(ll x, ll res[], ll res_size)
{
    ll carry = 0;
    for (ll i=0; i<res_size; i++)
    {
        ll prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod/10;
    }
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
int main()
{
    ll n;
    while(cin >> n)
    {
        fact(n);
        cout << endl;
    }
    return 0;
}

