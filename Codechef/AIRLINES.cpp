#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int total_seats = 10 * x;
        cout << min(total_seats, y) * z << endl;
    }

    return 0;
}
