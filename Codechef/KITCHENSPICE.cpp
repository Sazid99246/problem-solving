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
        if (n < 4)
        {
            cout << "MILD" << endl;
        }
        else if (n < 7)
        {
            cout << "MEDIUM" << endl;
        }
        else
        {
            cout << "HOT" << endl;
        }
    }

    return 0;
}
