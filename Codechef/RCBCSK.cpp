#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cin >> x >> y;
    string winner = x - y >= 18 ? "RCB" : "CSK";
    cout << winner << endl;
}
