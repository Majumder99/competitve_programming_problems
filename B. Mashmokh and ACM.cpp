/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,k,l,i,j,c=0;
    cin >> n >> k;
    k=k%1000000007;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            if(i<=j && j%i==0)
            {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}

