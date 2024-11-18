#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,m,n,o,a,b,c,x,cnt=0,s=0,sum=0,t,flag=0;
    cin >> t;
    while(t--)
    {
        sum=cnt=n=x=0;
        cin >> n >> x;
        ll a[n];
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        for(i=n-1; i>=0; i--)
        {
            if(a[i]>=x)
            {
                s = a[i]-x;
                cnt++;
                a[i-1]+=s;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

