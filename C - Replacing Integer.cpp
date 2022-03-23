#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n;
    cin >> n >> k;
    l=min(n%k,k-n%k);
    cout << l << endl;
    return 0;
}
