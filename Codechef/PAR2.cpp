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
        string result = n % 2 == 0 ? "Yes" : "No";
        cout << result << endl;
    }
}
