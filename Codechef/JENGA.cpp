#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string result = x >= n && x % n == 0 ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
