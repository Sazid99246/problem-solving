#include <bits/stdc++.h>
using namespace std;

int main()
{
    string date;
    getline(cin, date);
    cout << (date == "OCT 31" || date == "DEC 25" ? "yup" : "nope") << endl;
    return 0;
}
