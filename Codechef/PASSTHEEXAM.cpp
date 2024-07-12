#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        string result = a >= 10 && b >= 10 && c >= 10 && a + b + c >= 100 ? "PASS" : "FAIL";
        cout << result << endl;
    }

    return 0;
}
