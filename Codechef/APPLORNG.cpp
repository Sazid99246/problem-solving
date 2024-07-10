#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, a, b;
    cin >> x >> a >> b;
    string result = a + b <= x ? "Yes" : "No";
    cout << result << endl;
    return 0;
}
