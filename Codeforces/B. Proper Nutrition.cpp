#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll x,y,a,b,c,i,j,cnt,n;
    cin >> n >> a >> b;
    for(i=0; i*a<=n; i++)
    {
        if((n-a*i)%b==0)
        {
            cout << "YES" << endl;
            cout << i << " " << (n-a*i)/b << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
