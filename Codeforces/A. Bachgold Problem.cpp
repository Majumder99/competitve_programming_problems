/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,m,i,j,k,l,t;
    cin >> n;
    vector<ll>v;
    m=n/2;
    for(i=1; i<=m; i++)
    {
        n=n-2;
        v.push_back(2);
    }
    if(n==1)
    {
        k=v.size();
        v[k-1]=v[k-1]+1;
        cout << v.size() << endl;
        for(i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << v.size() << endl;
        for(i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

