#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;
    string result = w >= 60 && h <= 130 ? "YES" : "NO";
    cout << result;
    return 0;
}
