#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long p, r, f;
        cin >> p >> r >> f;

        int years = 0;

        // Simulate year by year
        while (p <= f)
        {
            years++;
            p *= r;
        }

        cout << years << endl;
    }

    return 0;
}
