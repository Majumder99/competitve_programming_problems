#define MAX 10000000
#define lim sqrt(MAX)
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
bool s[MAX];
ll prime[700000];
void sieve()
{
    ll i,j;
    s[0]=s[1]=1;
    for(i=3; i*i<=MAX; i+=2)
    {
        if(s[i]==false)
        {
            for(j=i*i; j<=MAX; j+=i+i)
            {
                s[j]=true;
            }
        }
    }
    prime[0]=2;
    j=1;
    for(i=3; i<=MAX; i+=2)
    {
        if(s[i]==false)
        {
            prime[j++]=i;
        }
    }
}
int main()
{
    sieve();
    ll n,t,i,j,k,rem,maxx,flag;
    while(cin >> n)
    {
        n=abs(n);
        if(n==0)
        {
            break;
        }
        flag=0;
        k=n;
        rem=sqrt(n);
        maxx=0;
        for(i=0; prime[i]<=k&&n>1; i++)
        {
            if(k%prime[i]==0)
            {
                maxx=prime[i];
                n=n/prime[i];
                flag++;
            }
        }
        if(flag<=1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << maxx << endl;
        }
    }
    return 0;
}
