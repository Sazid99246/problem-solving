#include <bits/stdc++.h>
using namespace std;

int main()
{
    int G, S, C;

    cin >> G >> S >> C;

    G *= 3;
    S *= 2;

    int sum = G + S + C;

    if (sum > 1)
    {
        if (sum > 7)
            cout << "Province";
        else if (sum > 4)
            cout << "Duchy";
        else
            cout << "Estate";

        cout << " or ";
    }

    if (sum > 5)
        cout << "Gold" << endl;
    else if (sum > 2)
        cout << "Silver" << endl;
    else
        cout << "Copper" << endl;

    return 0;
}
