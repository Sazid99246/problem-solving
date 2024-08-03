#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double a, b, x, y;
        cin >> a >> b >> x >> y;
        double chef = a / x;
        double chefina = b / y;

        if (chef < chefina)
            cout << "Chef" << endl;
        else if (chef > chefina)
            cout << "Chefina" << endl;
        else
            cout << "Both" << endl;
    }

    return 0;
}
