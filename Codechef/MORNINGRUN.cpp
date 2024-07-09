#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int perimiter = 2 * (x + y);
    string result = perimiter >= 1000 ? "YES" : "NO";
    cout << result << endl;
    return 0;
}
