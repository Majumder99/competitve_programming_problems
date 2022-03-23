#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,cnt=0,i,j;
    cin >> a >> b >> c >> d;
    while(1)
    {
        if(cnt%2==0)
        {
            cnt++;
            c=c-b;
            if(c<=0)
            {
                break;
            }
        }
        else
        {
            cnt++;
            a=a-d;
            if(a<=0)
            {
                break;
            }
        }
    }
    if(cnt%2==0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}
