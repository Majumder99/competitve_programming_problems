#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    long long i,j,t,n,a,b,l;
    cin >> t;
    while(t--)
    {
        long long x=1,c=0,k=0;
        cin >> a >> b;
        k=fact(a);
        while(x<=k)
        {
            x=x*b;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
