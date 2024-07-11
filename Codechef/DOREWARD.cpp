#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        if (x <= 3)
        {
            cout << "BRONZE" << endl;
        }
        else if (x <= 6)
        {
            cout << "SILVER" << endl;
        }
        else
        {
            cout << "GOLD" << endl;
        }
    }

    return 0;
}
