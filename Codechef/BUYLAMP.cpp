#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, x, y;
        cin >> n >> k >> x >> y;
        int only_red = n * x;
        int red_with_blue = k * x + (n - k) * y;
        cout << min(only_red, red_with_blue) << endl;
    }

    return 0;
}
