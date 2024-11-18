#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,i,j,k,m,n,sum=0;
    cin >> n >> m;
    long long int a[m];
    for(i=0; i<m; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    k=n-sum;
    if(k<0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << k << endl;
    }
    return 0;
}
