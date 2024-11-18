#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long int n,i,sum=0;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            continue;
        }
        else if(i%3 == 0)
        {
            continue;
        }
        else if(i%5 == 0)
        {
            continue;
        }
        else
        {
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}
