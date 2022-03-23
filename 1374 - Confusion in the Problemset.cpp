/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    priority_queue<ll>q;
    ll n,t,i,j,k,l;
    cin >> t;
    while(t--)
    {
        ll cnt=0;
        cin >> n;
        for(i=0; i<n; i++)
        {
            cin >> k;
            q.push(k);
        }
        for(i=0; i<n; i++)
        {
            if(q.top()==q.size()-1)
            {
                cnt++;
            }
            q.pop();
        }
        if(cnt==n)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}

