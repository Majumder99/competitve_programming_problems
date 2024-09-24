#include <bits/stdc++.h>
using namespace std;

int checking_sum(int a, int b, int c)
{
    if (a + b == c || a + c == b || b + c == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, a, b, c;
    cin >> n;
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        sum[i] = checking_sum(a, b, c);
    }

    for (int i = 0; i < n; i++)
    {
        if (sum[i] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
