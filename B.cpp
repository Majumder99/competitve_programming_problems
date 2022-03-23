#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    for(i=111; i<=999; i+=111)
    {
        if(i>=n)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
