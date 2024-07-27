#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x <= 100)
        {
            cout << x << endl;
        }
        else if (x <= 1000)
        {
            cout << x - 25 << endl;
        }
        else if (x <= 5000)
        {
            cout << x - 100 << endl;
        }
        else
        {
            cout << x - 500 << endl;
        }
    }

    return 0;
}
