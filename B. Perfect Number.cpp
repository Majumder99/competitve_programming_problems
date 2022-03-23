#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long maxx=110000;
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long i,j,k,l,n,sum,rem;
    long long a[maxx],b[maxx];
    k=1;
    for(i=19; i<=11000000; i+=9)
    {
        rem=0,sum=0;
        n=i;
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        if(sum==10)
        {
            b[k]=i;
            k++;
        }
    }
    cin >> l;
    cout << b[l] << endl;
    return 0;
}
