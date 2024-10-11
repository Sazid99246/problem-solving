#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t = 1;
    while (true)
    {
        cin >> s;
        if (s == "*")
        {
            break;
        }
        cout << "Case " << t << ": Hajj-e-";
        cout << (s == "Hajj" ? "Akbar" : "Asghar") << endl;
        t++;
    }
    return 0;
}
