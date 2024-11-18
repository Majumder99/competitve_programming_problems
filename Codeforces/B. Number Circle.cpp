#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll i,j,k,l,n;
    cin >> n;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    if(a[n-1]>=a[n-2]+a[n-3])
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for(i=0; i<n-2; i++)
    {
        printf("%d ",a[i]);
    }
    cout << a[n-1] << " " << a[n-2] << endl;
    return 0;
}
