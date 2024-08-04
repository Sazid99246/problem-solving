#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        cout << ((100 - x) / 10) * 10 << endl;
    }

    return 0;
}
