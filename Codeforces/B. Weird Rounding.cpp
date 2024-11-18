#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    string a;
    cin >> a;
    ll l,i,j,k,c=0,flag=0;
    cin >> k;
    l = a.size();
    for(i=l-1; i>=0; i--)
    {
        if(k<=0)
        {
            break;
        }
        if(a[i] == '0')
        {
            k--;
        }
        else
        {
            c++;
        }
    }
    if(k<=0)
        cout << c << endl;
    else
        cout << l-1 << endl;
    return 0;
}
