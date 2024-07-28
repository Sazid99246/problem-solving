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
        if (z % x != 0 && z % y != 0)
        {
            cout << "NONE" << endl;
        }
        else if (z % x == 0 && z % y == 0)
        {
            cout << "ANY" << endl;
        }
        else
        {
            if (z % x == 0)
            {
                cout << "CHICKEN" << endl;
            }
            else
            {
                cout << "DUCK" << endl;
            }
        }
    }

    return 0;
}
