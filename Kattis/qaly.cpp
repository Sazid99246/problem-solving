#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    double total = 0.0;
    while (t--)
    {
        double q, y;
        cin >> q >> y;
        total += q * y;
    }
    cout << fixed << setprecision(3) << total << endl;
    return 0;
}
