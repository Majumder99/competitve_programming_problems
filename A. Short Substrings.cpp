/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,t,n,l,k;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        l = s.size();
        for(i=0; i<l-2; i++)
        {
            if(i%2==0)
            {
                cout << s[i];
            }
            else
            {
                continue;
            }
        }
        cout << s[l-2] << s[l-1] << endl;
    }
    return 0;
}

