#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m > n)
    {
        int rest = m - n;
        if (rest == 1)
        {
            cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
        }
        else
        {
            cout << "Dr. Chaz will have " << rest << " pieces of chicken left over!" << endl;
        }
    }
    else
    {
        int extra = n - m;
        if (extra == 1)
        {
            cout << "Dr. Chaz needs 1 more piece of chicken!" << endl;
        }
        else
        {
            cout << "Dr. Chaz needs " << extra << " more pieces of chicken!" << endl;
        }
    }

    return 0;
}
