#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int total = x;
        for (int i = 1; i <= y; i++)
        {
            total = max(total + 1000, total * 2);
        }
        cout << total << endl;
    }

    return 0;
}
