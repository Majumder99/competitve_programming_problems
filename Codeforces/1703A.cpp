#include <bits/stdc++.h>
using namespace std;

void checking_yes()
{
    string s;
    cin >> s;
    if (s[0] != 'y' && s[0] != 'Y')
    {
        cout << "NO" << endl;
    }
    else if (s[1] != 'e' && s[1] != 'E')
    {
        cout << "NO" << endl;
    }
    else if (s[2] != 's' && s[2] != 'S')
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        checking_yes();
    }

    return 0;
}
