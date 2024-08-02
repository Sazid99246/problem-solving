#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int total_income = x * y;

        if (total_income <= z)
        {
            cout << 0 << endl; // No need to reduce any sources
        }
        else
        {
            // Calculate the excess amount over the limit
            int excess = total_income - z;

            // Determine the minimum number of sources to reduce
            int sources_to_reduce = (excess + y - 1) / y; // Ceil(excess / y)

            cout << sources_to_reduce << endl;
        }
    }

    return 0;
}
