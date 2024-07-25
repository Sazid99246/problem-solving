#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      int x, y, z;
      cin >> x >> y >> z;
      int total_student = x * y;
      double passed = ((double) z / total_student) * 100;
      string result = passed > 50 ? "YES" : "NO";
      cout << result << endl;
    }
    
    return 0;
}
