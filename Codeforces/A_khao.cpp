#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    long long i,j,Y=0,W=0,l1,l2;
    cin >> a >> b;
    l1=a.size();
    l2=b.size();
    for(i=0; i<l1; i++)
    {
        if(a[i]!='0')
        {
            if(tolower(a[i])==tolower(b[i]))
            {
                if(a[i]==b[i])
                {
                    Y++;
                    a[i]='0';
                    b[i]='0';

                }
            }
            else
            {
                for(j=0; j<l2; j++)
                {
                    if(b[j]=='0')
                    {
                        continue;
                    }
                    else if(a[i]==b[j])
                    {
                        Y++;
                        a[i]='0';
                        b[j]='0';
                    }
                }
            }
        }
    }
    cout << Y << " " << l1-Y << endl;
    return 0;
}

