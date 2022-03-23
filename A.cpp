#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l;
    l=s.size();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='1')
        {
            cout << '9';
        }
        else if(s[i]=='9')
        {
            cout << '1';
        }
    }
    return 0;
}
