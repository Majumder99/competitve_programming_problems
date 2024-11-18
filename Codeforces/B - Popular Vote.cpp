#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,sum=0,k=0,l=0,c=0;
    cin >> n >> m;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>=sum/(4.0*m))
        {
            c++;
        }
    }
    if(c>=m)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
