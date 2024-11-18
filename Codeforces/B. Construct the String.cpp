/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll i,j,k,l,m,n,t,a,b;
    cin >> t;
    while(t--)
    {
        char c[]= "abcdefghijklmnopqrstuvwxyz";
        string s="";
        cin >> n >> a >> b;
        ll cnt=0;
        k=0;
        for(i=0; s.size()<n; i++)
        {
            if(i>=b)
                i=0;
            s+=c[i];
        }
        cout << s << endl;
    }
    return 0;
}
