#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        string result = y * 30 <= x ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
