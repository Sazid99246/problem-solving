#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      int p, l;
      cin >> p >> l;
      double lit_rate = ((double) l / p) * 100;
      string result = lit_rate >= 75 ? "YES" : "NO";
      cout << result << endl;
    }
    
    return 0;
}