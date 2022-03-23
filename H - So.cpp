#include<bits/stdc++.h>
#include <bitset>
#include <cstdint>
#include <initializer_list>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string a,b;
    cin >> a >> b;
    bitset<32>b1(a);
    bitset<32>b2(b);
    int n1,n2;
    n1=b1.count();
    n2=b2.count();
    cout << n1 << " " << n2;
    return 0;
}
