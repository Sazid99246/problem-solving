#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b;
        cin >> x >> a >> b;

        int total_points = a + b * 2;
        string decision = total_points >= x ? "Qualify" : "NotQualify";
        cout << decision << endl;
    }

    return 0;
}
