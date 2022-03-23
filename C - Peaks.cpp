#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    int a,b,i,j,k,l,m,n,ans=0;
    cin >> n >> m;
    int h[n];
    vector<bool>c;
    c.assign(n,0);
    for(i=0; i<n; i++)
    {
        cin >> h[i];
    }
    for(i=0; i<m; i++)
    {
        cin >> a >> b;
        a--;
        b--;
        if(h[a]<h[b])
        {
            c[a]=1;
        }
        else if(h[a]>h[b])
        {
            c[b]=1;
        }
        else
        {
            c[a]=c[b]=1;
        }
    }
    for(i=0; i<n; i++)
    {
        if(c[i]==0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
