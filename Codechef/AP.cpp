#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (y - x == z - y)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
