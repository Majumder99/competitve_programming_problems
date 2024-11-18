/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,n,x,cnt=0,k;
    cin >> n >> x;
    for(i=1; i<=n; i++)
    {
        if(x%i==0 && x/i<=n)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

