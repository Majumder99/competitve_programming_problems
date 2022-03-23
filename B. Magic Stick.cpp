#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll t,i,j,k,n,m,l,sum,x,y;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        if(x==y)
            cout << "YES" << endl;
        else if(x<2)
            cout << "NO" << endl;
        else if(x<4)
        {
            if(y<=3)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}

