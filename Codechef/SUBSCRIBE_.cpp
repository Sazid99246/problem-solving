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
      int sub_count =  ceil((double) n / 6);
      cout << sub_count * x << endl;
    }
    
    return 0;
}