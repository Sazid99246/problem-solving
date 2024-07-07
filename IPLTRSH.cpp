#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, result;
        cin >> n >> m;
        result = n < m ? 0 : n - m;
        cout << result << endl;
    }
    return 0;
}
