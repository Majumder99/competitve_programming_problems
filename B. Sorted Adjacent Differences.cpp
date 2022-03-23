#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll t,n,i,j;
    cin >> t;
    while(t--)
    {
        ll k=0;
        cin >> n;
        ll ans[n]={0};
        ll a[n];
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        if(n%2==0)
        {
            k=n-1;
            for(i=0; i<n/2; i++)
            {
                ans[k--]=a[n-i-1];
                ans[k--]=a[i];
            }
        }
        else
        {
            k=n-1;
            ans[0]=a[n/2];
            for(i=0; i<n/2; i++)
            {
                ans[k--]=a[n-i-1];
                ans[k--]=a[i];
            }
        }
        for(i=0; i<n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
