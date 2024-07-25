#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (y > x)
    {
      cout << "INCREASED" << endl;
    }
    else if (y < x)
    {
      cout << "DECREASED" << endl;
    }
    else
    {
      cout << "SAME" << endl;
    }
    return 0;
}