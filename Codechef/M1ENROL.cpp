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
        int result = y < x ? 0 : y - x;
        cout << result << endl;
    }

    return 0;
}
