#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        cout << max(a, max(b, max(c, d))) << endl;
    }

    return 0;
}
