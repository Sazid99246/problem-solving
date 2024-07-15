#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
      int w, x, y, z;
      cin >> w >> x >> y >> z;
      int total = w + y * z;
      if (total > x)
      {
        cout << "Overflow" << endl;
      }
      else if (total < x)
      {
        cout << "Unfilled" << endl;
      }
      else
      {
        cout << "Filled" << endl;
      }
    }
    return 0;
    
}