#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // Calculate the squared distances
        int alexDistanceSquared = x1 * x1 + y1 * y1;
        int bobDistanceSquared = x2 * x2 + y2 * y2;

        if (alexDistanceSquared > bobDistanceSquared)
        {
            cout << "ALEX" << endl;
        }
        else if (bobDistanceSquared > alexDistanceSquared)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }

    return 0;
}
