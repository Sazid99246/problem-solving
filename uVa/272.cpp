#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    bool open_quote = true;

    while (getline(cin, line))
    {
        for (char &ch : line)
        {
            if (ch == '"')
            {
                if (open_quote)
                    cout << "``";
                else
                    cout << "''";
                open_quote = !open_quote;
            }
            else
                cout << ch;
        }
        cout << endl;
    }

    return 0;
}
