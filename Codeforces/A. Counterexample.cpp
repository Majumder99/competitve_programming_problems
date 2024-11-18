#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll a,b,c,l,r;
    cin >> l >> r;
    if(l%2!=0)
    {
        l++;
    }
    if(l+2>r)
        cout << -1 << endl;
    else
        cout << l << " " << l+1 << " " << l+2 << endl;
    return 0;
}
