#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int l,k,i,j,n,m,d,x=0,ans=0;
    cin >> n >> k;
    for(i=1; i<=k; i++)
    {
        cin >> d;
        while(d--)
        {
            cin >> x;
            a[x]++;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]==0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
