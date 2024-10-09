#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string name, date1, date2;
        int courses;
        cin >> name >> date1 >> date2 >> courses;

        // Replacing slashes with spaces
        replace(date1.begin(), date1.end(), '/', ' ');
        replace(date2.begin(), date2.end(), '/', ' ');

        // Extracting year, month, and day
        int y1, m1, d1, y2, m2, d2;
        stringstream ss1(date1), ss2(date2);
        ss1 >> y1 >> m1 >> d1;
        ss2 >> y2 >> m2 >> d2;

        if (y1 >= 2010 || y2 >= 1991)
        {
            cout << name << " eligible" << endl;
        }
        else if (courses >= 41)
        {
            cout << name << " ineligible" << endl;
        }
        else
        {
            cout << name << " coach petitions" << endl;
        }
    }

    return 0;
}
