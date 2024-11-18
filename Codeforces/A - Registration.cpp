#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    s+=t.back();
    puts(s == t ? "Yes" : "No");
    return 0;
}
