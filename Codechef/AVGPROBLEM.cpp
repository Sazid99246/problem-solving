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
        double average = (a + b) / (double) 2;
        string result = average > c ?  "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
