#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, h, o;
    while (cin >> p >> h >> o)
    {
        cout << (h > o - p ? "Hunters win!" : "Props win!") << endl;
    }

    return 0;
}
