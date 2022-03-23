#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    double pi=22.0/7.0;
    long long t,n;
    double Ox,Oy,Ax,Ay,Bx,By,Angle,Mx,My,OM,OA,Deg,i,j,g,h,k,l;
    cin >> t;
    while(t--)
    {
        OA=OM=Deg=Angle=0;
        cin >> Ox >> Oy >> Ax >> Ay >> Bx >> By;
        Mx=(Ax+Bx)/2;
        My=(Ay+By)/2;
        g=Ox-Ax;
        h=Oy-Ay;
        g=g*g;
        h=h*h;
        k=Ox-Mx;
        l=Oy-My;
        k=k*k;
        l=l*l;
        OA=sqrt(g+h);
        OM=sqrt(k+l);
        Angle=cos(OM/OA);
        Angle=(Angle*180.0)/pi;
        Angle=2*Angle;
        Deg=2*pi*OA*(Angle/360.0);
        cout << Deg << endl;
    }
    return 0;
}
