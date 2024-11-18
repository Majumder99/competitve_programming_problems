#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll t,i,j,k,l,c=0,flag=0,n,m;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll a[n];
        l = 0;
        for(i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for(i=1; i<=n; i++)
        {
            for(j=i+2; j<=n; j++)
            {
                if(a[i]==a[j])
                {
                    l = 1;
                }
            }
        }
        if(l==1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}

