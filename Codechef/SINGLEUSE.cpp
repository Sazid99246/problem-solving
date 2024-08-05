#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double h, x, y;
        cin >> h >> x >> y;
        cout << ceil((h - y) / x) + 1 << endl;
    }

    return 0;
}
