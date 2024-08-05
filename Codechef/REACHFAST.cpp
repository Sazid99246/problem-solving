#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;

        int distance = abs(b - a);
        int steps = (distance + k - 1) / k;
        cout << steps << endl;
    }

    return 0;
}
