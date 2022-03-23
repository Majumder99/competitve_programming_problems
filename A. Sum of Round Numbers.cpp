/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,i,j,k,l,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll>a;
        ll pwr=1;
        while(n!=0)
        {
            if(n%10>0)
            {
                a.push_back((n%10)*pwr);
            }
            n/=10;
            pwr*=10;
        }
        cout << a.size() << endl;
        for(auto it : a)
        {
            cout << it << " ";
        }
        cout << endl;
        a.clear();
    }
    return 0;
}

