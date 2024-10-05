#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    // Get the lengths of both strings
    int len_s = s.size();
    int len_t = t.size();
    int min_len = min(len_s, len_t);

    // Compare characters of both strings
    for (int i = 0; i < min_len; i++)
    {
        if (s[i] != t[i])
        {
            cout << i + 1 << endl; // Output the position (1-based)
            return 0;              // Exit after finding the first difference
        }
    }

    // If all characters matched, we check lengths
    if (len_s != len_t)
    {
        cout << min_len + 1 << endl; // Position of the first differing character
    }
    else
    {
        cout << 0 << endl; // Strings are identical
    }

    return 0;
}
