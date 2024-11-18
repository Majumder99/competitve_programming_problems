#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    string c,a;
    cin >> a;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    int l;
    l=a.size();
    for(int i=0; i<l; i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
        {
            continue;
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
            c=a[i];
            v.push_back(".");
            v.push_back(c);
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i];
    }
    cin.ignore();
    return 0;
}
