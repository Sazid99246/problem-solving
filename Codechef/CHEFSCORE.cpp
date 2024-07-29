#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string result = y % x == 0 ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
