/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,n,m,a,b;
    cin >> n >> m >> a >> b;
    if(m*a<=b)
    {
        cout << n*a << endl;
    }
    else
    {
        cout << (n/m)*b + min((n%m)*a,b) << endl;
    }
    return 0;
}

