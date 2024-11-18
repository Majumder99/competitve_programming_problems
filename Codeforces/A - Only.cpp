#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,i,j,k,t;
    string x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        string a(n,'0'),b(n,'0');
        for(i=0; i<n; i++)
        {
            if(x[i]=='1')
            {
                a[i]='1';
                b[i]='0';
                for(j=i+1; j<n; j++)
                {
                    b[j]=x[j];
                }
                break;
            }
            else if(x[i]=='0')
            {
                a[i]='0';
                b[i]='0';
            }
            else if(x[i]=='2')
            {
                a[i]='1';
                b[i]='1';
            }
        }
        cout << a << "\n" << b << endl;
    }
    return 0;
}
