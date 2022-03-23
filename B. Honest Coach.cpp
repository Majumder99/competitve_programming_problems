/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,n,t;
    cin >> t;
    while(t--)
    {
        ll mn=INT_MAX;
        cin >> n;
        vector<ll>a;
        for(i=0; i<n; i++)
        {
            cin>>k;
            a.push_back(k);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                l = abs(a[i]-a[j]);
                mn = min(mn,l);
            }
        }
        cout << mn << endl;
        a.clear();
    }
    return 0;
}

