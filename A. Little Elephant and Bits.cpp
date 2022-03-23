#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string s;
    ll i,j,k=0;
    cin >> s;
    ll l = s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]=='0')
        {
            s[i]='5';
            k=1;
            break;
        }
    }
    if(k==1)
    {
        for(i=0; i<l; i++)
        {
            if(s[i]!='5')
            {
                cout << s[i];
            }
        }
    }
    else
    {
        for(i=0; i<l-1; i++)
        {

            cout << s[i];

        }
    }
    cout << endl;
    return 0;
}
