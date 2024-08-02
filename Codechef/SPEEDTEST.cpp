#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double a, x, b, y;
        cin >> a >> x >> b >> y;

        double alice_speed = a / x;
        double bob_speed = b / y;

        if (alice_speed > bob_speed)
            cout << "Alice" << endl;
        else if (alice_speed < bob_speed)
            cout << "Bob" << endl;
        else
            cout << "Equal" << endl;
    }

    return 0;
}
