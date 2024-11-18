#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,sum,rem;
    while(scanf("%d %d",&n,&k)==2)
    {
        sum=n;
        while(n>=k)
        {
            rem=n/k;
            sum+=rem;
            n=rem+(n%k);
        }
        cout << sum << endl;
    }
}
