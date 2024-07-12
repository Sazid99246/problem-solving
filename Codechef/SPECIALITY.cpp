#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int maximum = max(a, max(b, c));
        if (maximum == a)
        {
            cout << "Setter" << endl;
        }
        else if (maximum == b)
        {
            cout << "Tester" << endl;
        }
        else
        {
            cout << "Editorialist" << endl;
        }
        
    }
    
    return 0;
}
