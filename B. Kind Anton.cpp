#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,m,n,t,c=0,flag=0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll>a(n),b(n);
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(i=0; i<n; i++)
        {
            cin >> b[i];
        }
        vector<int>v(2,0);
        int flag = 0;
        for(i=0; i<n; i++)
        {
            if(a[i] > b[i] && v[0] == 0)
            {
                flag = 1;
                break;
            }
            else if(a[i] < b[i] && v[1] == 0)
            {
                flag = 1;
                break;
            }
            if(a[i] == 1)v[1] = 1;
            if(a[i] == -1)v[0] = 1;
        }
        if(flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

