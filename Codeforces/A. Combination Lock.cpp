/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,i,j,k,sum=0;
    string a,b;
    cin>>n>>a>>b;
    for(i=0; i<n; i++)
    {
        sum+=min(abs(a[i]-b[i]),(10-abs(a[i]-b[i])));
    }
    cout << sum << endl;
    return 0;
}
