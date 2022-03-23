#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,m,n,o,a,b,c,cnt=0,s=0,sum1,sum2,t;
    cin >> t;
    vector<ll>v1,v2;
    while(t--)
    {
        sum1=sum2=0;
        cin >> n >> k;
        for(i=0; i<n; i++)
        {
            cin >> a;
            v1.push_back(a);
            sum1+=a;
        }
        for(i=0; i<n; i++)
        {
            cin >> b;
            v2.push_back(b);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        n--;
        l = 0;
        for(i = 0 ; i <= n ; i++)
        {
            if(l >= k)
                break;
            if(v1[i] < v2[n-i])
            {
                sum1-=v1[i];
                sum1+=v2[n-i];
                l++;
            }
            else
                break;
        }
        cout << sum1 << endl ;
        cin.ignore();
        v1.clear();
        v2.clear();
    }
    return 0;
}
