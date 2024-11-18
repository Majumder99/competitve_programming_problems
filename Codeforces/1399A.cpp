#include <bits/stdc++.h>
using namespace std;

void checking_removable()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool check = true;
    for (int i = 1; i< n; i++)
    {
        if (a[i] - a[i - 1] <= 1)
        {
            check = true;
        }else{
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        checking_removable();
    }

    return 0;
}
