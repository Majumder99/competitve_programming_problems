#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n,i,j,l,k;
    string a,b;
    vector<string>v1,v2;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(i==0)
        {
            v1.push_back(a);
            v2.push_back("OK");
        }
        else
        {
          v1.push_back(a);
        }

    }
    for(i=0;i<v1.size();i++)
    {
        for(j=i+1;j<v1.size();j++)

    }

    return 0;
}
