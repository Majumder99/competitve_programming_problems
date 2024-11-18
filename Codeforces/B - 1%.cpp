#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long i,j,k,l,m,n,x;
    cin >> x;
    long long p=100;
    l=0;
    while(p<x)
    {
        p+=p/100;
        l++;
    }
    cout << l << endl;
    return 0;
}
