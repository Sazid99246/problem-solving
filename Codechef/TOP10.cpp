#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string result = n >= 1 && n <= 10 ? "YES" : "NO";
        cout << result << endl;
    }
}
