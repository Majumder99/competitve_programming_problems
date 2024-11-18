/* Live like a king,Act like a king,Conquer like a king,Code like a king*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if((abs(x1-x2)!=abs(y1-y2)) && x1!=x2 && y1!=y2)
        cout << -1;
    else if(x1==x2)
    {
        cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x2+abs(y1-y2)<<" "<<y2<<endl;
    }
    else if(y1==y2)
    {
        cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x1-x2)<<endl;
    }
    else
    {
        cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2<<endl;
    }
    return 0;
}
