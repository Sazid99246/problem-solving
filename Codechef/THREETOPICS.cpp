#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    string result = a == x || b == x || c == x ? "Yes" : "No";
    cout << result << endl;

    return 0;
}
