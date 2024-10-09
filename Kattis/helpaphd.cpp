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
        if (s == "P=NP")
            cout << "skipped" << endl;
        else
        {
            size_t pos = s.find('+');
            // Extract the two numbers and convert them to integers
            int a = stoi(s.substr(0, pos));
            int b = stoi(s.substr(pos + 1));
            cout << a + b << endl;
        }
    }

    return 0;
}
