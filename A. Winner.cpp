#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,m,x;
    while(cin>>n)
    {
        string s[10000];
        long long a[10000];
        map<string,long long>mp1,mp2;
        for(i=0; i<n; i++)
        {
            cin>>s[i]>>a[i];
            mp1[s[i]]+=a[i];
        }
        long long mx=0;
        for(i=0; i<n; i++)
        {
            mx=max(mp1[s[i]],mx);
        }
        string ans;
        for(i=0; i<n; i++)
        {
            mp2[s[i]]+=a[i];
            if(mp2[s[i]]>=mx&&mp1[s[i]]==mx)
            {
                ans=s[i];
                break;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
}
