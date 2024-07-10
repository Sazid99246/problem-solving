#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cin >> x >> y;
    if (y > x)
    {
        cout << "Old" << endl;
    }
    else if (y < x)
    {
        cout << "New" << endl;
    }
    else
    {
        cout << "Same" << endl;
    }

    return 0;
}
