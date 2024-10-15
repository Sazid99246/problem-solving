#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t)
    {
        if (t == 0)
            break;
        int n, m;
        cin >> n >> m;

        while (t--)
        {
            int x, y;
            cin >> x >> y;
            if (x == n || y == m)
]                cout << "divisa" << endl;
            else if (x > n && y > m)
                cout << "NE" << endl; // Northeastern Nlogonia
            else if (x > n && y < m)
                cout << "SE" << endl; // Southeastern Nlogonia
            else if (x < n && y > m)
                cout << "NO" << endl; // Northwestern Nlogonia
            else if (x < n && y < m)
                cout << "SO" << endl; // Southwestern Nlogonia
        }
    }

    return 0;
}
