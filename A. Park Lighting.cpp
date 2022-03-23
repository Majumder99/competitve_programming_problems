/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,n,t,m,o;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        k = n*m;
        l = k/2;
        o = k%2;
        cout << l+o << endl;
    }
    return 0;
}

