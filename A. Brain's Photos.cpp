/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,n,m;
    char c;
    cin >> n >> m;
    k=n*m;
    map<char,ll>mp;
    for(i=0; i<k; i++)
    {
        cin >> c;
        mp[c]++;
    }
    if(mp['C']>0 || mp['M']>0 || mp['Y']>0)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }
    return 0;
}
