#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      int a, b, c, x;
      cin >> a >> b >> c >> x;
      string result = a + b >= x || b + c >= x || c + a >= x ? "YES" : "NO";
      cout << result << endl;
    }
    return 0;
}
