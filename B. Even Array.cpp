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
        cin >> n;
        ll a=0,b=0;
        for(i=0; i<n; i++)
        {
            cin >> k;
            if(k%2 != i%2)
            {
                if(i%2==0)
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
        }
        if(a!=b)
            cout << -1 << endl;
        else
            cout << a << endl;
    }
    return 0;
}
