#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct tm date = {};
    date.tm_year = 2013 - 1900;
    date.tm_mon = 4;
    date.tm_mday = 29;
    mktime(&date);

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%B %d, %Y %A", &date);
    cout << buffer << endl;
    return 0;
}
