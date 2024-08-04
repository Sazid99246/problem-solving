#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, o, c;
    cin >> r >> o >> c;
    int balls_remaining = (20 - o) * 6;
    int possible_total_runs = balls_remaining * 6 + c;
    string result = possible_total_runs > r ? "YES" : "NO";
    cout << result << endl;
    return 0;
}
