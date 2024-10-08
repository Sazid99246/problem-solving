#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    int total = max(l, r) * 2;
    if (total > 0)
    {
        if (l == r)
        {
            cout << "Even " << total << endl;
        }
        else
        {
            cout << "Odd " << total << endl;
        }
    }
    else
    {
        cout << "Not a moose" << endl;
    }

    return 0;
}
