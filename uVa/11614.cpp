#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;

        long long k = (-1 + sqrt(1 + 8 * x)) / 2;
        cout << k << endl;
    }
    return 0;
}
