#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() == 1 || (s.length() == 2 && s == "78"))
        {
            cout << "+" << endl;
        }
        else if (s[s.length() - 2] == '3' && s[s.length() - 1] == '5')
        {
            cout << "-" << endl;
        }
        else if (s[0] == '9' && s[s.length() - 1] == '4')
        {
            cout << "*" << endl;
        }
        else
        {
            cout << "?" << endl;
        }
    }

    return 0;
}
