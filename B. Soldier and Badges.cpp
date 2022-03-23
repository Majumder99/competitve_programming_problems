/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,n,t,c=0;
    cin >> n;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                a[j]=a[j]+1;
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}

