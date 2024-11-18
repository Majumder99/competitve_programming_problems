/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll dp[100007],freq[100007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,n,j,k,l,mx=0;
    cin >> n;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
        mx=max(mx,a[i]);
    }
    dp[1]=freq[1];
    for(i=2; i<=mx; i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+freq[i]*i);
    }
    cout << dp[mx] << endl;
    return 0;
}

