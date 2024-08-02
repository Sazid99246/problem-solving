#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, d;
        cin >> n >> x >> d;

        int daily_buns_needed = x * 5;
        int days_with_food = n / daily_buns_needed;
        int remaining_buns = n % daily_buns_needed;

        if (remaining_buns >= daily_buns_needed)
        {
            cout << days_with_food + d + 1 << endl;
        }
        else
        {
            cout << days_with_food + d << endl;
        }
    }

    return 0;
}
