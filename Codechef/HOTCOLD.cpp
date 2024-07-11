#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int c;
        cin >> c;
        string result = c > 20 ? "HOT" : "COLD";
        cout << result << endl;
    }

    return 0;
}
