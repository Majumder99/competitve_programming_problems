#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll n,i,j,k,l,cnt=0;
    cin >> n;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            k=i;
            cnt++;
        }
    }
    if(a[n-1]>a[0])
    {
        k=n-1;
        cnt++;
    }
    if(cnt==0)
    {
        cout << 0 << endl;
    }
    else if(cnt > 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << n-1-k << endl;
    }
    return 0;
}
