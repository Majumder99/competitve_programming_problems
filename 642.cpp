#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long int m,n,i,j,k,l,t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(n==1)
            cout << 0 << endl;
        else if(n==2)
            cout << m << endl;
        else
            cout << 2*m << endl;
        cin.ignore();
    }
    return 0;
}

