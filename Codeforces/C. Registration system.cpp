#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    map<string,int>mp;
    int n,i,j,l,t;
    string x;
    cin >> t;
    while(t--)
    {
        cin >> x;
        mp[x]++;
        if(mp[x]==1)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << x << mp[x]-1 << endl;
        }
    }
    return 0;
}
