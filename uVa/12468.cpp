#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    while (true)
    {
        cin >> x >> y;
        if (x < 0 || y < 0)
        {
            break;
        }

        cout << min((y - x + 100) % 100, (x - y + 100) % 100) << endl;
    }

    return 0;
}
