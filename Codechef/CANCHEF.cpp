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
        int total_distance = 2 * y;
        string result = x * 15 >= total_distance ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
