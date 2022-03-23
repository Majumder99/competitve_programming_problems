/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,n,a,b,c,d,sum=0;
    string s;
    cin>>a>>b>>c>>d;
    cin>>s;
    ll l = s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]=='1')
        {
            sum+=a;
        }
        else if(s[i]=='2')
        {
            sum+=b;
        }
        else if(s[i]=='3')
        {
            sum+=c;
        }
        else if(s[i]=='4')
        {
            sum+=d;
        }
    }
    cout << sum << endl;
    return 0;
}

