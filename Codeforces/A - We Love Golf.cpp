#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,k,l,m,n;
    cin >> k;
    cin >> a >> b;
    l=(b/k)*k;
    if(a<=l)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "NG" << endl;
    }
    return 0;
}
