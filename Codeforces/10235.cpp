#include<bits/stdc++.h>
using namespace std;
long long int NReverse(long long int n)
{
    long long int r = 0;
    while(n > 0)
    {
        r = (r*10) + (n%10);
        n /= 10;
    }
    return r;
}

bool IsPrime(long long int n)
{
    long long int x = sqrt(n), i;
    for(i = 2; i <= x; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long int n,rn;
    bool p,r;
    while(scanf("%lld",&n) == 1)
    {
        p=r=false;
        rn=NReverse(n);
        p=IsPrime(n);
        if(n!=rn)
        {
            r=IsPrime(rn);
        }
        if(p&&r)
        {
            cout << n << " is emirp." << endl;
        }
        else if(p)
        {
            cout << n << " is prime." << endl;
        }
        else
        {
            cout << n << " is not prime." << endl;
        }
    }
    return 0;
}
