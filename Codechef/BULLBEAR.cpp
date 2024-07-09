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
        if (y > x)
        {
            cout << "PROFIT" << endl;
        }
        else if (y < x)
        {
            cout << "LOSS" << endl;
        }
        else
        {
            cout << "NEUTRAL" << endl;
        }
    }
    return 0;
}
