#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>s;
    string a;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        s.push_back(a);
    }
    sort(s.begin(),s.end());
    auto last=unique(s.begin(),s.end());
    s.erase(last,s.end());
    cout << s.size() << endl;
    return 0;
}
