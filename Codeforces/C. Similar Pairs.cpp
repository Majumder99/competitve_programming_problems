#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,e,o,t,n,m,flag=0;
    cin >> t;
    while(t--)
    {
        e=n=o=m=k=flag=0;
        cin >> n;
        vector<int>v1(n);
        for(int &k:v1)
        {
            cin >> k;
            if(k%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        sort(v1.begin(),v1.end());
        if(e%2!=o%2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(e%2==0)
            {
                cout << "YES" << endl;
            }
            else
            {
                for(i=0; i<n; i++)
                {
                    for(j=i+1; j<n; j++)
                    {
                        if(abs(v1[i]-v1[j])==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }

        }
        v1.clear();
    }
    return 0;
}
