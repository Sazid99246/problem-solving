#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        string result = ((double)y / (double)x) * 100 >= 50 ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
