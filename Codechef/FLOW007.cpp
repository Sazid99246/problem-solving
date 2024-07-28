#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;

        while (!n.empty() && n.back() == '0')
        {
            n.pop_back();
        }

        reverse(n.begin(), n.end());
        cout << n << endl;
    }

    return 0;
}
