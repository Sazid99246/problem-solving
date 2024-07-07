#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, result;
        cin >> x;
        result = x > 100 ? x - 10 : x;
        cout << result << endl;
    }
    return 0;
}
