#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, d;
        cin >> x >> y >> d;
        if (y > x)
        {
            swap(x, y);
        }

        string result = x - y <= d ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
