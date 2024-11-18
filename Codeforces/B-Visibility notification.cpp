#include<bits/stdc++.h>
using namespace std;
int main()
{
    double m;
    cin >> m;
    m/=1000;
    if(m<0.1)
    {
        cout << 00 << endl;
    }
    else if(0.1<=m && m<=5)
    {
        cout << m*10 << endl;
    }
    else if(6<=m && m<=30)
    {
        cout << m+50 << endl;
    }
    else if(35<=m && m<=70)
    {
        m=m-30;
        m=m/5;
        m=m+80;
        cout << m << endl;
    }
    else if(m>=70)
    {
        cout << 89 << endl;
    }
    return 0;
}
