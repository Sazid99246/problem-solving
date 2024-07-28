#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, x;
        cin >> n >> x;
        if (x > n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ceil((n - x) / 4) << endl;
        }
    }

    return 0;
}
