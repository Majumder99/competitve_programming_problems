#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll i,j,k,l,m,n,c,cnt=0;
    cin >> n >> m;
    ll a[n];
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    i=1;
    while(1)
    {
        c = a[i];
        k = a[c];
        i = k;
        cnt+=2;
        if(cnt>=m)
        {
            cout << c << endl;
            break;
        }
    }
    return 0;
}
