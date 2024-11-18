/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,m,n,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll a[n];
        ll c0,c1,c2,x;
        c0=c1=c2=x=0;
        for(i=0; i<n; i++)
        {
            cin >> x;
            a[i]=x%3;
            if(a[i]==0)c0++;
            if(a[i]==1)c1++;
            if(a[i]==2)c2++;
        }
        ll r=0,rem=0;
        r+=c0+min(c1,c2);
        if(c1>c2)
        {
            rem=c1-min(c1,c2);
            r+=rem/3;
        }
        else
        {
            rem=c2-min(c1,c2);
            r+=rem/3;
        }
        cout << r << endl;
    }
    return 0;
}

