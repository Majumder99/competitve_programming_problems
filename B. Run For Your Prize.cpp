#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll i,j,k,l,m,n,s=0,f=0,x=1,y=1000000,t;
    cin >> t;
    ll a[t];
    for(i=0; i<t; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<t; i++)
    {
        m = abs(x-a[i]);
        n = abs(y-a[i]);
        f = max(f,min(m,n));
    }
    cout << f << endl;
    return 0;
}
