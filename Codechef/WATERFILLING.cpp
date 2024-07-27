#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1))
        {
            cout << "Not now" << endl;
        }
        else
        {
            cout << "Water filling time" << endl;
        }
    }

    return 0;
}
