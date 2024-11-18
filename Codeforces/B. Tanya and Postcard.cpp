#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,m,k,l,i,j,c1=0,c2=0;
    string s,t;
    map<char,ll>mp;
    cin >> s >> t;
    for(i=0; i<t.size(); i++)
    {
        mp[t[i]]++;
    }
    for(i=0; i<s.size(); i++)
    {
        if(mp[s[i]]>0)
        {
            c1++;
            mp[s[i]]--;
            s[i]='-';
        }
    }
    for(i=0; i<s.size(); i++)
    {
        if(s[i]!='-')
        {
            if(islower(s[i]) && mp[toupper(s[i])]>0)
            {
                c2++;
                mp[toupper(s[i])]--;
            }
            else if(isupper(s[i]) && mp[tolower(s[i])]>0)
            {
                c2++;
                mp[tolower(s[i])]--;
            }
        }
    }
    cout << c1 << " " << c2 << endl;
    cin.clear();
    cin.ignore();
    return 0;
}
