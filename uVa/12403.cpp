#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int total = 0;
    while (t--)
    {
        string command;
        cin >> command;
        if (command == "donate")
        {
            int money;
            cin >> money;
            total += money;
        }
        else if (command == "report")
            cout << total << endl;
    }
}