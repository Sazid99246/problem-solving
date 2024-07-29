#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m > n)
            cout << n << endl;
        else
            cout << (n - m) * 2 + m << endl;
    }

    return 0;
}
