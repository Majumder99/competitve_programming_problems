#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,l,m,x,a,b;
    cin >> x;
    for(i=-1000; i<1000; i++)
    {
        for(j=-1000; j<1000; j++)
        {
            if(i*i*i*i*i - j*j*j*j*j == x)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    return 0;
}
