/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll t,m,n,sum1,sum2,i,j;
    cin >> t;
    while(t--)
    {
        m=n=sum1=sum2=i=j=0;
        cin >> n;
        m=n/2-1;
        for(i=1; i<=m; i++)
        {
            sum1+=pow(2,i);
        }
        sum1+=pow(2,n);
        for(i=n/2; i<n; i++)
        {
            sum2+=pow(2,i);
        }
        cout << abs(sum1-sum2) << endl;
    }
    return 0;
}

