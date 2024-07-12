#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string result = m - k >= n ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
