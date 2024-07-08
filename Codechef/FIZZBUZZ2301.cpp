#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    string result;
    cin >> a >> b >> c;
    result = max(a, max(b, c)) == a ? "Yes" : "No";
    cout << result << endl;
    return 0;
}
