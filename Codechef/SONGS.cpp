#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      int n, x;
      cin >> n >> x;
      cout << n / (x * 3) << endl;
    }
    return 0;
}