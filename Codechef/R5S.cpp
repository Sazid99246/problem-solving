#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int ratingNow = x + y;
    string result = ratingNow >= 2000 ? "YES" : "NO";
    cout << result << endl;
    return 0;
}
