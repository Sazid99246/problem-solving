#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      int n, m;
      cin >> n >> m;
      int max_runs = m * 36;
      string result = max_runs >= n ? "YES" : "NO";
      cout << result << endl;
    }
    
    return 0;
}