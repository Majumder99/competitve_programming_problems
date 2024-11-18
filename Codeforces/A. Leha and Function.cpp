/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,n,t;
    cin >> n;
    vector<ll>a(n),b(n,0);
    vector<pair<int,int>>p;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> k;
        p.push_back({k,i});
    }
    sort(a.rbegin(),a.rend());
    sort(p.begin(),p.end());
    for(i=0; i<n; i++)
    {
        b[p[i].second]=a[i];
    }
    for(i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}

