#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np,x,y,z;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    x = (k * l) / (n * nl);
    y = (c * d) / n;
    z = p / (n * np);
    cout << min(x, min(y, z));
    return 0;
}

