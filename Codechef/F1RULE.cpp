#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      double x, y;
      cin >> x >> y;
      double total = x * 1.07;
      string result = y <= total ? "YES" : "NO";
      cout << result << endl;
    }
    return 0;
}