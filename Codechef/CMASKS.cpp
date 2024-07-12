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
        if (x * 100 < y * 10)
        {
            cout << "Disposable" << endl;
        }
        else
        {
            cout << "Cloth" << endl;
        }
    }

    return 0;
}
