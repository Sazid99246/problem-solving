#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> d;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            d.push_back(a);
        }

        vector<int> s;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            s.push_back(a);
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (d[i] == s[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
