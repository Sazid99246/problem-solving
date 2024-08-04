#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double x1, y1, x2, y2;
        cin >> x1 >> x2 >> y1 >> y2;

        int alex = sqrt(pow((0 - x1), 2) + pow((0 - y1), 2));
        int bob = sqrt(pow((0 - x2), 2) + pow((0 - y2), 2));

        if (alex > bob)
            cout << "ALEX" << endl;
        else if (bob > alex)
            cout << "BOB" << endl;
        else
            cout << "EQUAL" << endl;
    }

    return 0;
}
