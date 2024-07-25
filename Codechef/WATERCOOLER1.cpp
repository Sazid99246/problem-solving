#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      long long x, m, y;
      cin >> x >> m >> y;
      string result = x * y <? m ? "YES" : "NO";
      cout << result << endl;
    }
    
    return 0;
}