#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,k,cnt=0;
    cin >> a >> b >> c >> k;
    if(k<=a)
    {
        cout << k << endl;
        return 0;
    }
    if(k>a)
    {
        cnt+=a;
        k-=a;
        if(k<=b)
        {
            cout << cnt << endl;
            return 0;
        }
        if(k>b)
        {
            k-=b;
            if(k<=c)
            {
                cnt-=k;
                cout << cnt << endl;
                return 0;
            }

        }
    }
    return 0;
}
