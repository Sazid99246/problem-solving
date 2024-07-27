#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        long long total_power = a * b;
        long long total_power_in_moon = x * y;

        string result = total_power <= total_power_in_moon ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
