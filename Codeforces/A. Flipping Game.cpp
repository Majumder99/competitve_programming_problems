/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,n,m,cnt1=0,cnt0=0,cntmax=-1;
    cin >> n;
    while(n--)
    {
        cin >> k;
        if(k==1)
        {
            cnt1++;
            if(cnt0>0)
            {
                cnt0--;
            }
        }
        if(k==0)
        {
            cnt0++;
            if(cnt0>cntmax)
            {
                cntmax=cnt0;
            }
        }
    }
    l = cnt1+cntmax;
    cout << l << endl;
    return 0;
}

