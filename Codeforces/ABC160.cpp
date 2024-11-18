#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long int i,j,k,l,m,n,cnt=0,sum=0,s=0,t,b,c;
    cin >> k >> n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n-1; i++)
    {
        l=abs(a[i]-a[i+1]);
        sum+=l;
    }
    cout << sum << endl;
    return 0;
}
