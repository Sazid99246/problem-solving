#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, k;
        cin >> n >> x >> k;
        cout << min(n, k / x) << endl;
    }

    return 0;
}
