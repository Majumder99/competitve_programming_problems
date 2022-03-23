#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll x,y,a,b,c,i,j,cnt;
    cin >> n >> a >> b;
    for(i=0; i<=100000001; i++)
    {
        x=i;
        for(j=0; j<=100000001; j++)
        {
            y=j;
            if((a*x + b*y)==n)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}

