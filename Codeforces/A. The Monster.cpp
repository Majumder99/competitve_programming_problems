/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll a,b,c,d,n,i=0,j=0,s[200000],m[200000],l=0,k=0,flag=0;
    cin >> n;
    for(i=0; i<=1000; i++)
    {
        s[k++] = b + a*i;
    }
    for(i=0; i<=1000; i++)
    {
        m[l++] = d + c*i;
    }
    for(i=0; i<=1000; i++)
    {
        for(j=0; j<=1000; j++)
        {
            if(s[i]==m[j])
            {
                cout << s[i] << endl;
                flag=0;
                return 0;
            }
        }
    }
    if(flag!=0)
    {
        cout << -1 << endl;
    }
    return 0;
}

