#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    while (true)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
            break;

        if (x + y == 13)
            cout << "Never speak again." << endl;
        else if (x < y)
            cout << "Left beehind." << endl;
        else if (x > y)
            cout << "To the convention." << endl;
        else if (x == y)
            cout << "Undecided." << endl;
    }

    return 0;
}
