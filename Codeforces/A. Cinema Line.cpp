#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll i,k,l,m,n,j,c1=0,c5=0,c2=0,cnt=0;
    cin >> n;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin >> k;
        if(k==25)
        {
            c2++;
        }
        else if(k==50)
        {
            c5++;
            c2--;
        }
        else if(k==100)
        {
            if(c5!=0)
            {
                c5--;
                c2--;
            }
            else
            {
                c2-=3;
            }
        }
        if(c2<0 || c5<0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
