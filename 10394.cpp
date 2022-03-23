#include<bits/stdc++.h>
#define MAX 20000000
using namespace std;
using ll=long long int;
bool S[MAX];
ll prime[20000010];
void sieve()
{
    S[0]=S[1]=true;
    ll n,i,j,k,l;
    for(i=4; i<=MAX; i+=2)
    {
        S[i]=true;
    }
    for(i=3; i*i<=MAX; i+=2)
    {
        if(S[i]==false)
        {
            for(j=i*i; j<=MAX; j+=i+i)
            {
                S[j]=true;
            }
        }
    }
    j=1;
    for(i=3; i<=MAX; i+=2)
    {
        if(S[i]==0&&S[i+2]==0)
        {
            prime[j++]=i;
        }
    }
}
int main()
{
    sieve();
    ll i,j,n,k,l,o;
    while(cin >> n)
    {
        k=prime[n];
        cout << "(" << k << ", " << k+2 << ")" << endl;
    }
    return 0;
}
