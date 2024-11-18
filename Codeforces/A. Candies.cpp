#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,i,j,k,l,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=2; i<30; i++)
        {
            k=(1<<i)-1;
            if(n%k==0)
            {
                cout << n/k << endl;
                break;
            }
        }
    }
    return 0;
}
