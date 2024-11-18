#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,m,n,o,a,b,c,cnt=0,s=0,sum=0,t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        if(k*k<=n && n%2==k%2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
