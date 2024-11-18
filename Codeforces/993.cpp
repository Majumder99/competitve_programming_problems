#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<ll>v;
    ll n,i,s,l,k,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }
        v.clear();
        for(i=9; i>=2; i--)
        {
            while(n%i==0)
            {
                v.push_back(i);
                n/=i;
            }
        }
        if(n>9)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v.begin(),v.end());
            for(i=0; i<v.size(); i++)
            {
                cout << v[i];
            }
            cout << endl;
        }

    }
    return 0;
}
