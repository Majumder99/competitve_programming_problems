/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,l,n,c1=0,c0=0;
    string s;
    cin >> n;
    cin >> s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            c1++;
        }
        else if(s[i]=='0')
        {
            c0++;
        }
    }
    cout << abs(c1-c0) << endl;
    return 0;
}

