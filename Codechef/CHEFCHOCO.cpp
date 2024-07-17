#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      int c, x, y;
      cin >> c >> x >> y;
      cout << (c - x) * y << endl;
    }
    return 0;
}
