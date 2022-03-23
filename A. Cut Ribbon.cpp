/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,c,n,t,a,b,s=0,rem;
    cin>>n>>a>>b>>c;
    ll mx=0;
    for(i=0; i<=4000; i++)
    {
        for(j=0; j<=4000; j++)
        {
            k=a*i+b*j;
            rem=n-k;
            if(rem%c==0 && rem>=0)
            {
                l=rem/c;
                s=i+j+l;
                if((a*i+b*j+c*l)==n)
                {
                    if(mx<s)
                    {
                        mx=s;
                    }
                }
            }
        }
    }
    cout << mx << endl;
    return 0;
}

