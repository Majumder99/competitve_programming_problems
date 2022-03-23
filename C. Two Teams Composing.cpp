#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll t,i,j,k,l,m,n,x,o,a,b,c,s=0,sum=0;
    cin >> t;
    while(t--)
    {
        x=c=m=c=0;
        cin >> n;
        vector<ll>cnt(n+1);
        for(i=0; i<n; i++)
        {
            cin >> x;
            cnt[x]++;
        }
        m = *max_element(cnt.begin(),cnt.end());
        c = n + 1 - count(cnt.begin(),cnt.end(),0);
        cout << max(min(m,c-1),min(m-1,c)) << endl;
        cnt.clear();
    }
    return 0;
}

