#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        int max_capacity = x * 100;
        int extra_cars = (n + 99) / 100 - x;
        if (extra_cars < 0)
        {
            extra_cars = 0;
        }

        cout << extra_cars << endl;
    }

    return 0;
}
