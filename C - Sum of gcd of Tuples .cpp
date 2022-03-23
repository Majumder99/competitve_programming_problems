#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll gcd(ll a,ll b)
{
    if(a<b)
        swap(a,b);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,i,j,k,l,a,b,c,sum=0;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        a=i;
        for(j=1; j<=n; j++)
        {
            b=j;
            for(k=1; k<=n; k++)
            {
                c=k;
                sum+=gcd(gcd(a,b),c);
            }
        }
    }
    cout << sum << endl;
    return 0;
}
