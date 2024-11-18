/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,m,n,k,l,c,ans=0,rem=0,sum=1;
    cin >> n;
    k=n;
    vector<ll>v;
    while(n!=0)
    {
        rem=n%10;
        v.push_back(rem);
        sum*=rem;
        n/=10;
    }
    reverse(v.begin(),v.end());
    if(v.size()==1)
    {
        cout << k << endl;
        return 0;
    }
    if(v[0]==1)
    {
        ll tmp=1;
        for(i=1; i<v.size(); i++)
        {
            tmp*=9;
        }
        cout << tmp << endl;
        return 0;
    }
    for(i=0; i<v.size(); i++)
    {
        if(v[i]==0 || v[i]==1)
        {
            continue;
        }
        ll tmp = v[i]-1;
        for(j=0; j<i; j++)
        {
            tmp*=v[j];
        }
        for(j=i+1; j<v.size(); j++)
        {
            tmp*=9;
        }
        sum=max(sum,tmp);
    }
    cout << sum << endl;
    return 0;
}

