#include <bits/stdc++.h>
using namespace std;

int find_floor(int x)
{
    if (x % 10 == 0)
        return x / 10;
    else
        return x / 10 + 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int chef_floor = find_floor(x);
        int chefina_floor = find_floor(y);

        if (chefina_floor > chef_floor)
        {
            swap(chef_floor, chefina_floor);
        }
        cout << chef_floor - chefina_floor << endl;
    }

    return 0;
}
