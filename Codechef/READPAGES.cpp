#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string result = n <= x * y ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
