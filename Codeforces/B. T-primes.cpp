#include<bits/stdc++.h>
#define l 1000010
long long int prime[l];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    prime[0]=prime[1]=1;
    long long int i,j;
    for(i=2; i<l; i++)
    {
        if(prime[i]==false)
        {
            for(j=i+i; j<l; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    long long int t;
    double f;
    cin >> t;
    while(t--)
    {
        cin >> f;
        if(sqrt(f)==(int)sqrt(f))
        {
            if(prime[(int)sqrt(f)]==false)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
