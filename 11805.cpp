#include<bits/stdc++.h>
using ll= long long int;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,i,cnt,j,t,k,p;
    cin >> t;
    j=1;
    while(t--)
    {
        cnt=0;
        cin >> n >> k >> p;
        cnt=k;
        for(i=1; i<=p; i++)
        {
            cnt+=1;
            if(cnt>n)
            {
                cnt=cnt-n;
            }
        }
        cout << "Case " << j << ": " << cnt << endl;
        j++;
    }
    return 0;
}
