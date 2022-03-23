/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,t,n,m,h;
    cin >> t;
    while(t--)
    {
        cin >> h >> n >> m;
        while(h>0 && n && h/2+10<h)
        {
            n--;
            h=h/2+10;
        }
        if(h<=m*10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
