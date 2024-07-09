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
        int result = x >= y ? x - y : 0;
        cout << result << endl;
    }

    return 0;
}
