#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,m,n,o,a,b,c,cnt=0,s=0,sum=0;
    cin >> n >> m;
    for(i=1; i<=n; i++)
    {
        sum+=(m+i%5)/5;
    }
    cout << sum << endl;
    return 0;
}

