#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,c=0;
    cin >> n >> m;
    long long s[m],a,b;
    s[0]=1;
    for(i=1; i<=m; i++)
    {
        cin >> s[i];
    }
    for(i=0; i<m; i++)
    {
        a=s[i];
        b=s[i+1];
        if(a<=b)
        {
            c=c+b-a;
        }
        else
        {
            c=c+n-a+b;
        }
    }
    cout << c << endl;
    return 0;
}
