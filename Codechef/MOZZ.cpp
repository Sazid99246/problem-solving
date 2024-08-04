#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double x, y, r;
        cin >> x >> y >> r;
        int extra_sticks = r / 30;
        int total_sticks = extra_sticks + x;
        cout << ceil(total_sticks / y) << endl;
    }

    return 0;
}
