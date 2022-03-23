#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll a[300000];
int main()
{
    ll n,m,i,j,k,l;
    cin >> n;
    for(i=1; i<n; i++)
    {
        cin >> m;
        a[m]++;
    }
    for(i=1; i<=n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
