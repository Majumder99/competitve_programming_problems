/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,n,m,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll>v(n);
        for(i=0; i<n; i++)
        {
            cin >> v[i];
        }
        bool a = true;
        for(i=0; i<n; i++)
        {
            for(j=0; j<i; j++)
            {
                a = a& abs(v[i]-v[j])!=1;
            }
        }
        cout << 2-a << endl;
    }
    return 0;
}

