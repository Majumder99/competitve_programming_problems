/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,n,t,a,b,k,l;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << (min(max(2*a,b),max(2*b,a)))*(min(max(2*a,b),max(2*b,a)))<< endl;
    }
    return 0;
}

