#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,flag=0;
    cin >> n;
    while(n!=0)
    {
        int rem = n % 10;
        if(rem==7)
        {
            flag=1;
            break;
        }
        n=n/10;
    }
    if(flag==1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
