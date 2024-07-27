#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y;
        cin >> x >> y;
        cout << ceil((x * y) / 4) << endl;
    }

    return 0;
}
