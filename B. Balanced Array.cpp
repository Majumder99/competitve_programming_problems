#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        n=n/2;
        if(n&1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(i=1; i<=n; i++)
        {
            cout << 2*i << " ";
        }
        for(i=1; i<n; i++)
        {
            cout << 2*i-1 << " ";
        }
        cout << 3*n-1 << endl;
    }
    return 0;
}
