/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
bool compare(string a,string b)
{
    return a.size()<b.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,i,j,l,k;
    cin >> n;
    vector<string>a(n);
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end(),compare);
    for(i=0; i<n-1; i++)
    {
        if(a[i+1].find(a[i])==string::npos)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    for(auto it:a)
        cout << it << endl;
    return 0;
}
