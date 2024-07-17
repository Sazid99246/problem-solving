#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        int result = static_cast<int>(x * 0.1);
        cout << max(result, 100) << endl;
    }
    return 0;
}