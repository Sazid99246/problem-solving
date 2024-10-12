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
        if (a + b == c || a - b == c || b - a == c || a * b == c || (double)a / b == c || (double)b / a == c)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }

    return 0;
}
