#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, p;
        cin >> n >> x >> p;

        int total = x * 3 - (n - x);
        string result = total >= p ? "PASS" : "FAIL";
        cout << result << endl;
    }

    return 0;
}
