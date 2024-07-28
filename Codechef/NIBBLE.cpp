#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string result = x % 4 == 0 ? "Good" : "Not Good";
        cout << result << endl;
    }

    return 0;
}
