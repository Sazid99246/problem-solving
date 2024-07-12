#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << "REPAIR" << endl;
        }
        else if (x > y)
        {
            cout << "NEW PHONE" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }

    return 0;
}
