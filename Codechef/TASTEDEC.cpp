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
        int chocolate_taste = x * 2;
        int candy_taste = y * 5;
        if (chocolate_taste > candy_taste)
        {
            cout << "Chocolate" << endl;
        }
        else if (chocolate_taste < candy_taste)
        {
            cout << "Candy" << endl;
        }
        else
        {
            cout << "Either" << endl;
        }
    }
    return 0;
}
