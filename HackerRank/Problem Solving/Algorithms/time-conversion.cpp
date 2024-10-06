#include <bits/stdc++.h>

using namespace std;

int getIndex(string arr[], string st)
{
    for (int i = 0; i < 11; i++)
    {
        if (arr[i] == st)
            return i;
    }
    return -1;
}

string timeConversion(string s)
{
    string pm[11] = {"13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"};
    string am[11] = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11"};
    string st = "", time = "";

    int index;
    st += s[0];
    st += s[1];
    if (s[s.size() - 2] == 'P')
    {
        index = getIndex(am, st);
        st[0] = pm[index][0];
        st[1] = pm[index][1];
    }
    if (s[s.size() - 2] == 'A' && s[0] == '1' && s[1] == '2')
    {
        st[0] = '0';
        st[1] = '0';
    }

    s[0] = st[0];
    s[1] = st[1];

    for (int i = 0; i < s.size() - 2; i++)
    {
        time += s[i];
    }

    return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
