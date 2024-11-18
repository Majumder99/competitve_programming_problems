#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,c,i,j,cnt;
    cin >> a >> b >> c;
    for(i=0; i<=10001; i++)
    {
        x=i;
        for(j=0; j<=10001; j++)
        {
            y=j;
            if((a*x + b*y)==c)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
