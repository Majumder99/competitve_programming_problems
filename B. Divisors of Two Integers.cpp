#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,i,j,x,y,l;
    cin >> n;
    vector<ll>a(n);
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    l = a.size();
    x = a[l-1];
    set<ll>s;
    for(i=0; i<n; i++)
    {
        if(x % a[i] == 0 && s.count(a[i]) == 0)
        {
            s.insert(a[i]);
        }
        else
        {
            y = a[i];
        }
    }
    cout << x << " " << y << endl;
    return 0;
}

