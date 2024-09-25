#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, g, b;
        cin >> r >> g >> b;
        if (r <= g + b && g <= r + b && b <= r + g)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        }

    return 0;
}
