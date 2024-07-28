#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int first_price = 100 - a;
        int second_price = 200 - b * 2;

        if (first_price < second_price)
        {
            cout << "FIRST" << endl;
        }
        else if (first_price > second_price)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "BOTH" << endl;
        }
    }

    return 0;
}
